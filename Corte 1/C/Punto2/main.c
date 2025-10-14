#include <stdio.h>
#include <stdlib.h>
int main() {
    char producto[50];
    float precio;
	float total;
    int cantidad;
    printf("Ingrese el nombre del producto: ");
    scanf("%s", producto);
    printf("Ingrese el precio por unidad: ");
    scanf("%f", &precio);
    printf("Ingrese la cantidad: ");
    scanf("%d", &cantidad);
    total = precio * cantidad;
    printf("\nProducto: %s\n", producto);
    printf("Unidades: %d\n", cantidad);
    printf("Total: %.2f\n", total);
    return 0;
}
