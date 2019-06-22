#include "CMatrix.h"
#include <iostream>
#include <random>
#include <iostream>
#include <thread>
#include <mutex>
#include <future>
#include <algorithm>
#include <iterator>
#include <iomanip>

//using namespace std;

CMatrix::CMatrix(const CMatrix &m)
{
    *this = m;
}

CMatrix::CMatrix(int rows , int cols) : rows{rows}, columns{cols}
{
    matrix = new int*[rows];

    for (int i = 0; i < rows; i++)
        matrix[i] = new int[cols];
}


void CMatrix::print_values()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl << std::endl;
    }
    std::cout << std::endl << std::endl;
}

void CMatrix::delete_values() {
    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void CMatrix::fill_random() {
    matrix = new int*[rows];
    for (auto i = 0; i < rows; i++)
        matrix[i] = new int[columns];

    std::random_device rd;
    for (auto i = 0; i < rows; i++)
        for (auto j = 0; j < columns; j++)
            matrix[i][j] = static_cast<int>(rd()%3 +1);
}

CMatrix CMatrix::operator*(CMatrix &m)
{
    CMatrix new_matrix(this->rows, m.columns);
    std::vector<std::thread> my_threads(this->columns * m.rows);

    auto current_thread = my_threads.begin();
    for (int i = 0; i < this->rows; ++i)
    {
        for (int j = 0; j < m.columns; ++j)
        {
            (*current_thread) = std::thread(&CMatrix::multiply, new_matrix, i, j, this->row(i), m.column(j));
            current_thread++;
        }
    }

    for (auto& current_threads: my_threads)
        current_threads.join();

    return new_matrix;
}

void CMatrix::set_value(int i, int j, int new_value)
{
    if (i < rows && j < columns)
        matrix[i][j] = new_value;
}

std::vector<int> CMatrix::row(int num) {
    std::vector<int> result;
    for (int i = 0; i < columns; ++i)
        result.push_back(matrix[num][i]);
    return result;
}

std::vector<int> CMatrix::column(int num) {
    std::vector<int> result;
    for (int i = 0; i < rows; ++i)
        result.push_back(matrix[i][num]);
    return result;
}

void CMatrix::multiply(int r, int c, std::vector<int> row, std::vector<int> column) {
    std::vector<int>::iterator ptr;
    int val = std::inner_product(row.begin(), row.end(), column.begin(), 0);
    this->set_value(r, c, val);
}



