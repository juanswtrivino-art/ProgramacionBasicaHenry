#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
    int repetir=1;
    int i, j;
    while (repetir==1){
    printf("Ingrese el tamano N de la matriz : ");
    scanf("%d", &N);
    float A[N][N], B[N][N], C[N][N];
    printf("\nIngrese los elementos de la matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%f", &A[i][j]);
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i == j)
                B[i][j] = 0;
            else
                B[i][j] = A[i][j];
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i > j)
                C[i][j] = A[i][j] + A[j][i];
            else
                C[i][j] = 0;
        }
    }
    printf("\nMATRIZ ORIGINAL\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%3.f ", A[i][j]);
        }
        printf("\n");
    }
    printf("\nMATRIZ CON DIAGONAL EN 0\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%3.f ", B[i][j]);
        }
        printf("\n");
    }
    printf("\nMATRIZ RESULTANTE\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%3.f ", C[i][j]);
        }
        printf("\n");
    }
    printf("Desea ejecutar nuevamente? si=1, no=0");
    scanf("%d", &repetir);
}
printf("Fin del programa");
return 0;
}



