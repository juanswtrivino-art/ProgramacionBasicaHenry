#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
    int i, j;
    int repetir = 1; 
    while (repetir == 1) {
        printf("Ingrese el tamano N de la matriz : ");
        scanf("%d", &N);
        if (N <= 0) {
            printf("El tamaño debe ser positivo.\n");
            continue;
        }
        int matriz[N][N];
        int maxFila[N];
        printf("Ingrese los elementos de la matriz:\n");
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                scanf("%d", &matriz[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            int max = matriz[i][0];
            for (j = 1; j < N; j++) {
                if (matriz[i][j] > max) {
                    max = matriz[i][j];
                }
            }
            maxFila[i] = max;
        }
        printf("\nMatriz ingresada:\n");
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
        printf("\nVector con el valor maximo de cada fila:\n");
        for (i = 0; i < N; i++) {
            printf("%d ", maxFila[i]);
        }
        printf("\n");
        printf("\nDesea ejecutar nuevamente? si=1, no=0: ");
        scanf("%d", &repetir);
    }
    printf("Fin del programa.\n");
    return 0;
}
