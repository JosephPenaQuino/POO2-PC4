#ifndef UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_CMATRIX_H
#define UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_CMATRIX_H


class CMatrix
{
private:
    int ** matrix;
    int rows;
    int columns;
    void get_line();

public:

    CMatrix(const CMatrix &m);
    CMatrix(int rows , int cols);
    void fill_random();
    void print_values();
    void delete_values();

    void set_value(int i, int j, int new_value);

    friend CMatrix operator * (const CMatrix& m);
    CMatrix operator * (const CMatrix& m);
};


#endif //UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_CMATRIX_H
