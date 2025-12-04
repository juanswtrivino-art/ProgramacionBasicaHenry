#include <stdio.h>
#include <stdlib.h>
int main() {
    int N;
    int i, j;
    float sumaMax = 0, mediaMax;
    int repetir = 1;
    while(repetir==1){
    printf("Ingrese el tamano N de la matriz: ");
    scanf("%d", &N);
    int matriz[N][N];
    int maxFila[N];
    printf("\nIngrese los elementos de la matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < N; i++) {
        maxFila[i] = matriz[i][0];
        for (j = 1; j < N; j++) {
            if (matriz[i][j] > maxFila[i]) {
                maxFila[i] = matriz[i][j];
            }
        }
        sumaMax += maxFila[i];
    }
    mediaMax = sumaMax / N;
    printf("\nResultados\n");
    for (i = 0; i < N; i++) {
        printf("Maximo de la fila %d: %d\n", i, maxFila[i]);
    }
    printf("Media de los maximos: %.2f\n", mediaMax);
    printf("Desea ejecutar nuevamente? si=1, no=0");
    scanf("%d", &repetir);
}
printf("Fin del programa");
return 0;
}
