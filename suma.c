#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Funcion para las sumas*/
void sumamatriz(int fila, int columna, int matrizprimera[fila][columna], int matrizsegunda[fila][columna], int matrizresultante[fila][columna])
{
    /*Se realiza la suma de las matrices*/
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            matrizresultante[i][j] = matrizprimera[i][j] + matrizsegunda[i][j];
        }
    }
}
int main(int argc, char const *argv[])
{
    int fila, columna;
    printf("Ingrese el numero de filas : ");
    scanf("%d", &fila);
    printf("Ingrese el numero de columnas : ");
    scanf("%d", &columna);
    int matrizprimera[fila][columna], matrizsegunda[fila][columna], matrizresultante[fila][columna];
    srand(time(NULL));

    /*Matriz aleatorrias tanto para la primera y la segunda*/
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            matrizprimera[i][j] = rand() % 100 + 1;
        }
    }
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            matrizsegunda[i][j] = rand() % 100 + 1;
        }
    }
    printf("\n");
    printf("Matriz primera:\n");
    printf("\n");
    for (int i = 0; i < fila; i++)
    {

        for (int j = 0; j < columna; j++)
        {
            printf("%d ", matrizprimera[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Matriz Segunda:\n");
    printf("\n");
    for (int i = 0; i < fila; i++)
    {

        for (int j = 0; j < columna; j++)
        {
            printf("%d ", matrizsegunda[i][j]);
        }
        printf("\n");
    }
    /*Se llama la funcion de sumas*/
    sumamatriz(fila, columna, matrizprimera, matrizsegunda, matrizresultante);
    printf("\n");
    printf("La matriz resultante de la suma es:");
    printf("\n");
    printf("\n");
    for (int i = 0; i < fila; i++)
    {
        for (int j = 0; j < columna; j++)
        {
            printf("%d ", matrizresultante[i][j]);
        }
        printf("\n");
    }
    return 0;
}
