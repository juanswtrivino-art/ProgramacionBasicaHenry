#include <stdio.h>
#include <stdlib.h>
int i, n;
float promedio = 0;
int main() {
	int repetir = 1;
	while(repetir==1){
	printf("Digite el indice del vector: ");
	scanf("%d", &n);
	int v1[n];
	int suma = 0;
	for(i = 0; i < n; i++){
		printf("Digite los elementos del vector: ");
		scanf("%d", &v1[i]);
	}
	for(i = 0; i < n; i++){
		printf("%d", v1[i]);
	}
	for(i = 0; i < n; i++){
		suma = suma+v1[i];
	}
	printf("\nLa suma es: %d\n", suma);
	for(i = 0; i < n; i++){
		promedio = suma/n;
	}
	printf("el promedio del vector es: %2.f\n", promedio);
	printf("Desea ejecutar nuevamente? \n1=si \n0=no");
	scanf("%d", &repetir);
    }
    printf("fin del programa");
}
