//
// Created by David Lazo on 19/06/2019.
//

#include "Matriz.h"
class Matriz {

private:
    int filas, columnas;
    float **elementos;

public:
    //Constructores
    Matriz();
    Matriz(const Matriz&);
    Matriz(const int, const int);
    //Destructor
    ~Matriz();

    //Métodos de acceso
    float Elemento(const int, const int);
    int Filas();
    int Columnas();
    void Mostrar();

    //Métodos de modificación
    void Inicializar();



    //Sobrecarga de operadores
    Matriz operator = (const Matriz&);
    Matriz operator * (const Matriz&);

};
#endif //PC3_MATRIZ_H