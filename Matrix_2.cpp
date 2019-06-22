//
// Created by albin on 22/06/2019.
//

#include "Matrix_2.h"
#include <type_traits>
#include <random>
#include <iostream>
using namespace std;

//Constructor por omision
template<typename T>
Matrix_2<T>::Matrix_2(){
    rows = 0;
    columns = 0;
}

//Constructor por copia
template<typename T>
Matrix_2<T>::Matrix_2(const Matrix_2& mat){
    int i,j;
    rows = mat.rows;
    columns = mat.columns;
    elementos = new T * [rows];
    for(i=0; i<rows; i++){
        elementos[i] = new T[columns];
        for(j=0; j<columns; j++){
            elementos[i][j] = mat.elementos[i][j];
        }
    }
}
template<typename T>
Matrix_2<T>::Matrix_2(const int f, const int c){
    int i;
    rows = f;
    columns = c;
    elementos = new T * [rows];
    for(i=0; i<rows; i++){
        elementos[i] = new T[columns];

    }
    for (int j=0;j<rows;j++){
        for(int k=0;k<columns;k++){
            elementos[j][k]=0;
        }
    }
}

//Destructor
template<typename T>
Matrix_2<T>::~Matrix_2(){
    delete [] elementos;
}


template<typename T>
void Matrix_2<T>::show(){
    int i, j;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            cout<<elementos[i][j]<<" ";
        }
        cout<<endl;
    }
}
template<typename T>
void Matrix_2<T>::fill_random(){
    //srand(time(NULL));
    int i, j;
    random_device rd;
    for(i=0; i<rows; i++){
        for(j=0; j<columns; j++){
            elementos[i][j] = static_cast<int>(rd()%10);
        }
    }
}

//Sobrecarga de Operadores
template<typename T>
Matrix_2<T> Matrix_2<T>::operator = (const Matrix_2 mat){
    int i,j;
    if(this->rows != 0 || this->columns != 0)
        delete [] this->elementos;

    this->rows = mat.rows;
    this->columns = mat.columns;
    this->elementos = new T * [this->rows*this->columns];
    for(i=0; i<this->rows; i++){
        this->elementos[i] = new T[columns];
        for(j=0; j<this->columns; j++){
            this->elementos[i][j] = mat.elementos[i][j];
        }
    }
    return *this;

}

template<typename T>
Matrix_2<T> Matrix_2<T>::operator * (const Matrix_2 m) {
    int i, j,k;
    if (this->columns == m.rows) {
        Matrix_2 res(this->rows,m.columns);
        for (i = 0; i < this->rows; i++){
            for (j = 0; j < m.columns; j++){
                for( k = 0 ; k < m.rows; k++)
                    res.elementos[i][j] += elementos[i][k]*m.elementos[k][j];
            }
        }
        return res;
    } else{
        cout<<"La Columna de M1 no es igual a la fila de M2"<<endl;
    }
}
template<typename T>
void Matrix_2<T>::fill_manual() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Ingrese el valor de la filas " << i + 1 << " Columnas " << j + 1 << endl;
            cin >> elementos[i][j];
        }
    }
}