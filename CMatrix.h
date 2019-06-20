#ifndef UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_CMATRIX_H
#define UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_CMATRIX_H


class CMatrix
{
private:
    int ** matrix;
    int rows;
    int columns;

public:
    CMatrix(int rows, int columns);
    CMatrix operator * (const CMatrix & matrix2);
};


#endif //UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_CMATRIX_H
