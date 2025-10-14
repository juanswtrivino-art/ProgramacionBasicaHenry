#include <stdio.h>
int main() {
    float nota;
    printf("Ingrese la nota (0 a 10): ");
    scanf("%f", &nota);
    if (nota < 5)
        printf("Suspenso\n");
    else if (nota < 7)
        printf("Aprobado\n");
    else if (nota < 9)
        printf("Notable\n");
    else if (nota < 10)
        printf("Sobresaliente\n");
    else if (nota == 10)
        printf("Matricula de honor\n");
    else
        printf("Nota invalida\n");
    return 0;
}
