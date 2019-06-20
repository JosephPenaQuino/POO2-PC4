#ifndef UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_CMATRIX_H
#define UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_CMATRIX_H


class CMatrix
{
private:

    void get_line();

public:
    CMatrix operator * (const CMatrix & matrix2);
    void print_values();
};


#endif //UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_CMATRIX_H
