//
// Created by albin on 20/06/2019.
//

#include "Matrix.h"



template<typename T>
Matrix<T>::Matrix()
{
    m_rows = 4;
    m_cols = 4;
}


template<typename T>
Matrix<T>::Matrix(const Matrix &m)
{
    *this = m;
}


template<typename T>
Matrix<T>::Matrix(int rows , int cols)
{
    m_cols = cols;
    m_rows = rows;
    m_matrix = new T*[m_rows];

    for (int i = 0; i < m_rows; i++) {
        m_matrix[i] = new T[m_cols];
    }
}



template<typename T>
Matrix<T> Matrix<T>::operator* (const Matrix &matrix_2)
{
    Matrix matrix_result(m_rows, matrix_2.m_cols);
    T total = T();

    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < matrix_2.m_cols; j++) {
            for (int k = 0; k < m_cols; k++) {
                total += (m_matrix[i][k] * matrix_2.m_matrix[k][j]);
            }
            matrix_result.m_matrix[i][j] = total;

            // Limpiar el total sumado arriba
            total = 0;
        }
    }
    return matrix_result;
}




template<typename T>
void Matrix<T>::fill_random()
{
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < m_cols; j++) {
            m_matrix[i][j] = rand() % 10;
        }
    }

}



template<typename T>
void Matrix<T>::print_matrix()
{
    for (int i = 0; i < m_rows; i++) {
        for (int j = 0; j < m_cols; j++) {
            cout << m_matrix[i][j] << " ";
        }
        cout << endl << endl;
    }
    cout << endl << endl;
}

template<typename T>
Matrix<T>::~Matrix() {}