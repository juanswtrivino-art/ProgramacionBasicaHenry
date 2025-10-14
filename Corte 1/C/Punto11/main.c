#include <stdio.h>
#include <string.h>

int main() {
    char pass[20];
    int intentos = 0;

    while (intentos < 3) {
        printf("Ingrese contraseña: ");
        scanf("%s", pass);

        if (strcmp(pass, "56789") == 0) {
            printf("Contraseña Correcta\n");
            return 0;
        } else {
            printf("Lo siento, contraseña equivocada\n");
        }
        intentos++;
    }

    printf("Demasiados intentos\n");
    return 0;
}
