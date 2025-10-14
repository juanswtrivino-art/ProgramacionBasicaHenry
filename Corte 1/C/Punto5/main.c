#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
float apuesta;
float total;
int moneda;
srand(time(NULL));
printf("Ingrese la cantidad a apostar: ");
scanf("%f", &apuesta);
moneda = rand() % 2; 
    if(moneda == 1) {
        total = apuesta * 2;
        printf("Salio CARA! Ganaste %.2f\n", total);
    } else {
        printf("Salio CRUZ! Perdiste todo.\n");
    }
    return 0;
}
