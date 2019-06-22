# Programación Concurrente

## Integrantes

- JOSEPH PEÑA AQUINO
- ALEJANDRO MAMANI ANDIA
- DAVID LAZO PAMPA
## Introduccion 
En el presente se redactará acerca del análisis de una multiplicación de matrices,
implementado de forma concurrente y no concurrente.

## Algoritmos utilizado

### No Concurrente

Se utilizó el algoritmo tradicional de multiplicación de matrices

1. **para** i = 0 hasta m **hacer**
2. **para** z = 0 hasta p **hacer**
3. s <- 0
4. **para** j = 0 hasta n  **hacer**
5. s <- A\[i][j] x B\[j][z] + s
6. **fin para**
7. C\[i][z] <- s
8. **fin para**
9. **fin para**

Donde:

- m: número de filas de la matriz A
- p: número de columnas de la matriz B
- n: número de columnas de la matriz A o número de filas de la matriz B

### Concurrente

Se utilizó el algoritmo tradicional concurrente de multiplicación de matrices 

1. Solicitar memoria para m hilos
2. Solicitar memoria para las matrices A, B, C
3. **para** i=0 hasta m - 1 **hacer**
4. **para** j=0 hasta n - 1 **hacer**
5. Iniciar nuevo threaad donde se realiza producto punto entre la fila i del la matriz A y la columna j de la matriz B
6. Almacenar resultado en la posicion C\[i][j]
7. **fin para**
8. **fin para**

## Resultados

Se realizó una tabla comparativa donde se muestra la diferencia de tiempos con distintos tamaños de matrices:
TABLA 1. Tiempos de procesos. *Haciendo uso de chrono library.

| Tamaño de Matriz | Concurrente (s) | No Concurrente (s) |
| ---------------- | --------------- | ------------------ |
| 50 x 50          | 0.131124        | 0.0008094          |
| 100 x 100        | 0.418751        | 0.0044648          |
| 200 x 200        | 0.684551        | 0.0090234          |
| 500 x 500        | 0.849845        | 0.0177737          |
| 600 x 600        | 1.134530        | 0.0214564          |


Cabe resaltar que estos resultados fueron obtenidos mediante un TDD(Test Driven Development),
haciendo uso de su arquitectura para el optimo desarrollo del analisis.

## Analisis de resultados

La implementacion de la multiplicacion no concurrente, genero un costo computacional mas alto,
esto dado a que ocupa un mayor espacio en la memoria por sus largos procesos iterativos.

El costo computacional redujo en porcentajes altisimos, al usar programacion concurrente,
esto se refleja en la tabla 1.


## Conclusiones

En este caso especifico, el proceso de multiplicar matrices, es mas eficiente hacer uso de programacion
concurrente, mediante el uso de threads, dado que sugiere una menor complejidad computacional para el usuario.

Se sugiere implementar metodos no concurrentes que no hagan muchas iteraciones pues es esto lo que genera el 
incremento de la complejidad computacional.



## Referencias

- Lira, R. E. A., May, A. C., García, R. A. G., Pérez, V. A. G., & 
  Lira, C. D. J. A. (2017). MulCoMa un algoritmo concurrente para 
  multiplicar matrices. *Journal of Basic Sciences*, *3*(7).
