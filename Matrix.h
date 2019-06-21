//
// Created by albin on 20/06/2019.
//

#ifndef UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_MATRIX_H
#define UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_MATRIX_H



#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

template <class T>
class Matrix {
private:
    T m_mode;
    T **m_matrix;
    int m_cols;
    int m_rows;
public:
    Matrix();
    Matrix(int, int);
    Matrix(const Matrix &m);
    ~Matrix();
    Matrix<T> operator* (const Matrix &matrix_2);
    void fill_random();
    void print_matrix();
};




#endif //UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_MATRIX_H
