#include <stdio.h>

int main() {
    float num;
	float suma = 0;
    int cont = 0;

    printf("Ingrese numeros positivos (termine con un negativo):\n");
    do {
        scanf("%f", &num);
        if (num >= 0) {
            suma += num;
            cont++;
        }
    } while (num >= 0);

    if (cont > 0)
        printf("Promedio = %.2f\n", suma / cont);
    else
        printf("No se ingresaron numeros validos\n");

    return 0;
}
