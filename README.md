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
5. Realizar producto punto entre la fila i del la matriz A y la columna j de la matriz B
6. Almacenar resultado en la posicion C\[i][j]
7. **fin para**
8. **fin para**

## Resultados

