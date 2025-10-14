#include <stdio.h>
#include<stdlib.h>
int main() {
    char nombre[50];
    float horas;
	float precio_hora;
	float bruto;
	float retencion;
	float neto;
    printf("Ingrese el nombre del trabajador: ");
    scanf("%s", nombre);
    printf("Horas trabajadas: ");
    scanf("%f", &horas);
    printf("Precio por hora: ");
    scanf("%f", &precio_hora);
    bruto = horas * precio_hora;
    retencion = bruto * 0.05;
    neto = bruto - retencion;
    printf("\nTrabajador: %s\n", nombre);
    printf("Sueldo bruto: %.2f\n", bruto);
    printf("Retencion (5%%): %.2f\n", retencion);
    printf("Sueldo neto: %.2f\n", neto);
    return 0;
}
