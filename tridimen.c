#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Prototipo de funciones
void inicializarMatrices(int kcaras, int ifila, int jcolumna, int matriz[kcaras][ifila][jcolumna]);
void imprimir(int kcaras, int ifila, int jcolumna, int matriz[kcaras][ifila][jcolumna]);

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
    return 0;
}
