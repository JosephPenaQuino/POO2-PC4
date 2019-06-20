#include "CMatrix.h"

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