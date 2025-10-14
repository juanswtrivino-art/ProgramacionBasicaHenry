#include <stdio.h>

int main() {
    int N;
	int M;
	int cont = 0;
	int i;

    printf("Ingrese dos numeros (N M): ");
    scanf("%d %d", &N, &M);

    if (N <= M) {
        printf("Error: N debe ser mayor que M\n");
    } else {
        for (i = M + 1; i < N; i++) {
            if (i % 2 == 0) {
                printf("%d ", i);
                cont++;
                if (cont == 3) break;
            }
        }
        if (cont < 3)
            printf("\nNo hay tres numeros pares entre los valores ingresados\n");
        else
            printf("\n");
    }

    return 0;
}
