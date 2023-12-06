#include <stdio.h>
/*Funcion para las sumas*/
void sumamatriz(int fila, int columna, int matrizprimera[fila][columna], int matrizsegunda[fila][columna], int matrizresultante[fila][columna])
{
}
int main(int argc, char const *argv[])
{
    int fila, columna;
    printf("Ingrese el numero de filas : ");
    scanf("%d", &fila);
    printf("Ingrese el numero de columnas : ");
    scanf("%d", &columna);
    int matrizprimera[fila][columna], matrizsegunda[fila][columna], matrizresultante[fila][columna];
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

    return 0;
}
