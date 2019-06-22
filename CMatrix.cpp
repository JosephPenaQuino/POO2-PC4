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
    CMatrix new_matrix(2, 2);
//    std::vector<std::thread> my_threads(4);
//
//    for (auto & current_thread : my_threads)
//        current_thread = std::thread
//    new_matrix.multiply(0, 0, this->row(0), m.column(0));
//    new_matrix.multiply(0, 1, this->row(0), m.column(1));
//    new_matrix.multiply(1, 0, this->row(1), m.column(0));
//    new_matrix.multiply(1, 1, this->row(1), m.column(1));

    std::thread t1{&CMatrix::multiply,new_matrix, 0, 0, this->row(0), m.column(0)};
    std::thread t2{&CMatrix::multiply,new_matrix, 0, 1, this->row(0), m.column(1)};
    std::thread t3{&CMatrix::multiply,new_matrix, 1, 0, this->row(1), m.column(0)};
    std::thread t4{&CMatrix::multiply,new_matrix, 1, 1, this->row(1), m.column(1)};

    t1.join();
    t2.join();
    t3.join();
    t4.join();
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



