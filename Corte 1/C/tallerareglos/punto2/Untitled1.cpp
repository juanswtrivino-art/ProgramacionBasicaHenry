#include <stdio.h>
#include <stdlib.h>
int i,n;
int main(){
	int repetir = 1;
	while(repetir==1){
	printf("digite la dimension del vector: ");
	scanf("%d", &n);
	int v1[n];
		for(i = 0; i < n; i++){
			do{
			printf("digite los valores del vector: ");
			scanf("%d", &v1[i]);
			if(v1[i] % 2 != 0){
				printf("El numero no es par, intente de nuevo \n ");
			}	
			}while(v1[i] % 2 != 0);
		}
			for(i = 0; i < n; i++){
				printf("%d ", v1[i]);
			}
			for(i = 0; i < n; i++){
				if(v1[i] % 2 == 0){
					printf("\nposicion %d valor %d\n", i, v1[i]);
				}
			}
			printf("desea ejecutar nuevamente? \nsi=1 \nno=0");
			scanf("%d", &repetir);
		}
		printf("fin del programa");
	}

