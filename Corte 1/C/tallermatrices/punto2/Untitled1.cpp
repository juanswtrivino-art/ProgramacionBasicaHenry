#include <stdio.h>
#include <stdlib.h>
int main() {
    int N, M;
    int i, j;
    int max, min;
    int repetir = 1;
    float suma = 0, media;
    while(repetir==1){
    printf("Ingrese el numero de filas: ");
    scanf("%d", &N);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &M);
    int matriz[N][M];
    printf("\nIngrese los elementos de la matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    max = min = matriz[0][0];
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (matriz[i][j] > max)
                max = matriz[i][j];
            if (matriz[i][j] < min)
                min = matriz[i][j];
            suma += matriz[i][j];
        }
    }
    media = suma / (N * M);
    printf("\nResultados\n");
    printf("Valor maximo: %d\n", max);
    printf("Valor minimo: %d\n", min);
    printf("Media de los elementos: %.2f\n", media);
    printf("Desea ejecutar nuevamente? si=1, no=0");
    scanf("%d", &repetir);
}
 printf("Fin del programa");
 return 0;
}

