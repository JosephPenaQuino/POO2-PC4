#include <iostream>
#include "Matriz.h"
using namespace std;
int main() {

    int fila1,fila2,columna1,columna2;
    cout<<"Ingrese Matris 1 fila"<<endl;
    cin>>fila1;
    cout<<"Ingrese Matris 1 columna"<<endl;
    cin>>columna1;
    cout<<"Ingrese Matris 2 fila"<<endl;
    cin>>fila2;
    cout<<"Ingrese Matris 2 columna"<<endl;
    cin>>columna2;

    Matriz  m1(fila1, columna1), m2(fila2, columna2), m3;

    m1.Inicializar();
    m2.Inicializar();

    m1.Mostrar();
    cout << endl;
    m2.Mostrar();
    m3 = m1 + m2;
    cout << endl;
    m3.Mostrar();

    return 0;
}