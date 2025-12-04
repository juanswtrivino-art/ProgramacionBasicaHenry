#include <stdio.h>

int main() {
    int N, M;
    int i, j;
    int contador = 0;
    int repetir = 1;
    while(repetir==1){
    printf("Ingrese el numero de filas: ");
    scanf("%d", &N);
    printf("Ingrese el numero de columnas: ");
    scanf("%d", &M);
    int matriz[N][M];
    printf("Ingrese los elementos de la matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\nLos valores pares en la matriz son:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            if (matriz[i][j] % 2 == 0) {
                printf("%d\n", matriz[i][j]);
                contador++;
            }
        }
    }
    printf("\nLa matriz contiene %d valores pares\n", contador);
    printf("Desea ejecutar nuevamente? si=1, no=0");
    scanf("%d", &repetir);
}
printf("Fin del programa");
return 0;
}

