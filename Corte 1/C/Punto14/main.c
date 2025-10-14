#include <stdio.h>

int main() {
    int num;
	int pos = 0;
	int neg = 0;

    printf("Ingrese numeros (termine con 0):\n");
    do {
        scanf("%d", &num);
        if (num > 0) pos++;
        else if (num < 0) neg++;
    } while (num != 0);

    printf("Positivos: %d\nNegativos: %d\n", pos, neg);
    return 0;
}
