#include "CMatrix.h"

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

void CMatrix::get_line()
{

}

// TODO: Implement print_values
void CMatrix::print_values()
{

}
