#include <stdio.h>
#include <stdlib.h>
int main() {
    int N, i, j;
    int sumaPares = 0, sumaImpares = 0;
    int sumaPosPares = 0, sumaPosImpares = 0;
    int contPares = 0, contImpares = 0;
    int contPosPares = 0, contPosImpares = 0;
    float mediaPares = 0, mediaImpares = 0;
    float mediaPosPares = 0, mediaPosImpares = 0;
    int repetir = 1;
    while(repetir==1){
    printf("Ingrese el tamaño N de la matriz: ");
    scanf("%d", &N);
    int matriz[N][N];
    printf("\nIngrese los elementos de la matriz:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            int valor = matriz[i][j];
            int pos = i * N + j; 
            if (valor % 2 == 0) {
                sumaPares += valor;
                contPares++;
            } else {
                sumaImpares += valor;
                contImpares++;
            }
            if (pos % 2 == 0) {
                sumaPosPares += valor;
                contPosPares++;
            } else {
                sumaPosImpares += valor;
                contPosImpares++;
            }
        }
    }
    if (contPares > 0) mediaPares = (float)sumaPares / contPares;
    if (contImpares > 0) mediaImpares = (float)sumaImpares / contImpares;
    if (contPosPares > 0) mediaPosPares = (float)sumaPosPares / contPosPares;
    if (contPosImpares > 0) mediaPosImpares = (float)sumaPosImpares / contPosImpares;
    printf("\n--- RESULTADOS ---\n");
    printf("Suma de numeros pares: %d\n", sumaPares);
    printf("Media de numeros pares: %.2f\n", mediaPares);
    printf("Suma de numeros impares: %d\n", sumaImpares);
    printf("Media de numeros impares: %.2f\n", mediaImpares);
    printf("Suma de numeros en posiciones pares: %d\n", sumaPosPares);
    printf("Media de numeros en posiciones pares: %.2f\n", mediaPosPares);
    printf("Suma de numeros en posiciones impares: %d\n", sumaPosImpares);
    printf("Media de numeros en posiciones impares: %.2f\n", mediaPosImpares);
    printf("Desea ejecuta nuevamente? si=1, no=0");
    scanf("%d", &repetir);
}
printf("Fin del programa");
return 0;
}

