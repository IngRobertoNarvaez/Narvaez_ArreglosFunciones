#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Prototipo de funciones
void inicializarMatrices(int kcaras, int ifila, int jcolumna, int matriz[kcaras][ifila][jcolumna])
{
    for (int k = 0; k < kcaras; k++)
    {
        for (int i = 0; i < ifila; i++)
        {
            for (int j = 0; j < jcolumna; j++)
            {
                matriz[k][i][j] = 0;
            }
        }
    }

    // La matriz de numeros unos se iniciará aquí
    for (int i = 0; i < ifila; i++)
    {
        for (int j = 0; j < jcolumna; j++)
        {
            matriz[kcaras - 1][i][j] = 1;
        }
    }
}
void imprimir(int kcaras, int ifila, int jcolumna, int matriz[kcaras][ifila][jcolumna])
{
    for (int k = 0; k < kcaras; k++)
    {
        printf("Matriz de cara %d:\n", k + 1);
        for (int i = 0; i < ifila; i++)
        {
            for (int j = 0; j < jcolumna; j++)
            {
                printf("%d ", matriz[k][i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
int main()
{
    int ifila;
    int jcolumna;
    int kcaras;

    printf("Ingresar Fila  :");
    scanf("\n %d", &ifila);
    printf("Ingresar Columna  :");
    scanf("\n %d", &jcolumna);
    printf("Ingresar caras  :");
    scanf("\n %d", &kcaras);
    printf("\n");
    int matriz[kcaras][ifila][jcolumna];
    srand(time(NULL));
    // Llamada a la funcion para inicializar las matrices
    inicializarMatrices(kcaras, ifila, jcolumna, matriz);

    // Llamada a la funcion para imprimir las matrices
    imprimir(kcaras, ifila, jcolumna, matriz);
    return 0;
}
