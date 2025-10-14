#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    int secreto = 1 + rand() % 10;
    int num, intentos = 0;
    do {
        printf("Adivine el numero (1-10): ");
        scanf("%d", &num);
        intentos++;
        if (num != secreto)
            printf("Incorrecto\n");
    } while (num != secreto);
    printf("¡Acertaste! Lo hiciste en %d intentos\n", intentos);
    return 0;
}
