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
using namespace std;
CMatrix::CMatrix(const CMatrix &m)
{
    *this = m;
}

CMatrix::CMatrix(int rows , int cols)
{
    this ->columns = cols;
    this ->rows = rows;
    matrix = new int*[rows];

    for (int i = 0; i < rows; i++)
        matrix[i] = new int[cols];
}

void CMatrix::get_line()
{

}



// TODO: Implement print_values
void CMatrix::print_values()
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl << endl;
    }
    cout << endl << endl;
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

    random_device rd;
    for (auto i = 0; i < rows; i++)
        for (auto j = 0; j < columns; j++)
            matrix[i][j] = static_cast<int>(rd()%10);
}


