#ifndef UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_CMATRIX_H
#define UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_CMATRIX_H


class CMatrix
{
private:
    int ** matrix;
    int rows;
    int columns;

public:
<<<<<<< HEAD
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

=======
    CMatrix(int rows, int columns);
    CMatrix operator * (const CMatrix & matrix2);
>>>>>>> 27a18fb6987d94d1e9dd2f98acf0160b5a12eb26
};


#endif //UNIDAD_6_PROGRAMACION_CONCURRENTE_JOSEPHPENAQUINO_CMATRIX_H
