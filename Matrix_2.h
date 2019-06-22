//
// Created by albin on 22/06/2019.
//

#ifndef UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_MATRIX_2_H
#define UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_MATRIX_2_H

template <class T>
class Matrix_2 {

private:
    int rows, columns;
    T **elementos;

public:
    //Constructores

    Matrix_2();
    Matrix_2(const Matrix_2&);
    Matrix_2(const int, const int);
    //Destructor
    ~Matrix_2();

    //Métodos de acceso
    void show();

    //Métodos de modificación
    void fill_random();
    //Le puse  para Opcion de poner llenar la matriz
    void fill_manual();

    //Sobrecarga de operadores
    Matrix_2<T> operator = (const Matrix_2);
    Matrix_2<T> operator * (const Matrix_2);

};




#endif //UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_MATRIX_2_H
