#include <stdio.h>
#include <stdlib.h>
int main() {
    int N, M;
    int i, j;
    int repetir = 1;
    while (repetir == 1) {
        printf("Ingrese el numero de filas: ");
        scanf("%d", &N);
        printf("Ingrese el numero de columnas: ");
        scanf("%d", &M);
        float matriz[N][M];
        float sumaFilas[N];
        float sumaColumnas[M];
        float sumaTotal = 0;
        for (i = 0; i < N; i++) sumaFilas[i] = 0;
        for (j = 0; j < M; j++) sumaColumnas[j] = 0;
        printf("\nIngrese los elementos de la matriz:\n");
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                scanf("%f", &matriz[i][j]);
            }
        }
        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                sumaFilas[i] += matriz[i][j];
                sumaColumnas[j] += matriz[i][j];
            }
        }
        for (i = 0; i < N; i++) {
            sumaTotal += sumaFilas[i];
        }
        printf("\nMATRIZ CON SUMAS\n\n");

        for (i = 0; i < N; i++) {
            for (j = 0; j < M; j++) {
                printf("%3.f ", matriz[i][j]);
            }
            printf("| %3.f\n", sumaFilas[i]);
        }
        for (j = 0; j < M; j++) {
            printf("----------");
        }
        printf("-----------\n");
        for (j = 0; j < M; j++) {
            printf("%3.f ", sumaColumnas[j]);
        }
        printf("| %3.f\n", sumaTotal);
        printf("\nDesea ejecutar nuevamente? (si=1 / no=0): ");
        scanf("%d", &repetir);
        printf("\n");
    }
    printf("Fin del programa\n");
    return 0;
}


