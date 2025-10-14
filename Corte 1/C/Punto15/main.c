#include <stdio.h>

int main() {
    int n, i, esPrimo = 1;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if (n <= 1) esPrimo = 0;
    else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                esPrimo = 0;
                break;
            }
        }
    }

    if (esPrimo)
        printf("Es primo\n");
    else
        printf("No es primo\n");

    return 0;
}
