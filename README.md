# Programación Concurrente

## Integrantes



- JOSEPH PEÑA AQUINO
- ALEJANDRO MAMANI ANDIA
- DAVID LAZO PAMPA

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

| Tamaño de Matriz | Concurrente (s) | No Concurrente (s) |
| ---------------- | --------------- | ------------------ |
| 50 x 50          | 0.131124        | 0.000809435        |
| 100 x 100        | 0.418751        | 0.00446484         |
| 500 x 500        | 0.849845        | 0.0177737          |



## Referencias

- Lira, R. E. A., May, A. C., García, R. A. G., Pérez, V. A. G., & 
  Lira, C. D. J. A. (2017). MulCoMa un algoritmo concurrente para 
  multiplicar matrices. *Journal of Basic Sciences*, *3*(7).