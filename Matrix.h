#ifndef UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_MATRIX_H
#define UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_MATRIX_H



#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <random>

using namespace std;

template <class T>
class Matrix {
private:
    T m_mode;
    T **m_matrix;
    int m_cols;
    int m_rows;
public:
    Matrix()
    {
        m_rows = 4;
        m_cols = 4;
    }

    Matrix(int rows , int cols)
    {
        m_cols = cols;
        m_rows = rows;
        m_matrix = new T *[m_rows];

        for (int i = 0; i < m_rows; i++)
        {
            m_matrix[i] = new T[m_cols];
        }
    }

    Matrix(const Matrix &m)
    {
        *this = m;
    }

    ~Matrix()
    {

    }

    Matrix<T> operator* (const Matrix &matrix)
    {
        Matrix matrix_result(m_rows, matrix.m_cols);
        T total = T();

        for (int i = 0; i < m_rows; i++) {
            for (int j = 0; j < matrix.m_cols; j++) {
                for (int k = 0; k < m_cols; k++) {
                    total += (m_matrix[i][k] * matrix.m_matrix[k][j]);
                }
                matrix_result.m_matrix[i][j] = total;

                total = 0;
            }
        }
        return matrix_result;
    }

    void fill_random()
    {
        int i, j;
        random_device rd;
        for(i=0; i<m_rows; i++){
            for(j=0; j<m_cols; j++){
                m_matrix[i][j] = static_cast<int>(rd()%10);
            }
        }
    }

    void print_matrix()
    {
        for (int i = 0; i < m_rows; i++) {
            for (int j = 0; j < m_cols; j++) {
                cout << m_matrix[i][j] << " ";
            }
            cout << endl << endl;
        }
        cout << endl << endl;
    }
};




#endif //UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_MATRIX_H
