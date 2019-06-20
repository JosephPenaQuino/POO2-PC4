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

    CMatrix(const CMatrix &m)
    {
        *this = m;
    }

    CMatrix(int rows , int cols)
    {
        this ->columns = cols;
        this ->rows = rows;
        matrix = new int*[rows];

        for (int i = 0; i < rows; i++) {
            matrix[i] = new int[cols];
        }
    }

    CMatrix operator * (const CMatrix & matrix2);

    void print_values();

};


#endif //UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_CMATRIX_H
