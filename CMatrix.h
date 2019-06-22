#ifndef UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_CMATRIX_H
#define UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_CMATRIX_H

#include <functional>
#include <vector>
#include <numeric>

class CMatrix
{
private:
    int ** matrix;
    int rows;
    int columns;

public:

    CMatrix(const CMatrix &m);
    CMatrix(int rows , int cols);
    void fill_random();
    void print_values();
    void delete_values();
    void set_value(int i, int j, int new_value);
    void multiply(int r, int c, std::vector<int> row, std::vector<int> column);

    std::vector<int> row(int num);
    std::vector<int> column(int num);

    friend CMatrix operator * (CMatrix& m);
    CMatrix operator * (CMatrix& m);
};


#endif //UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_CMATRIX_H
