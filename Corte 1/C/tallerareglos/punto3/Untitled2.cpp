#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, n, m;
	int repetir = 1;
	while(repetir==1){
		printf("digite la dimension del vector 1:");
		scanf("%d", &n);
		printf("digite la dimension del vector 2:");
		scanf("%d", &m);
		if(n != m){
			printf("Los vectores deben tener la misma dimension\n");
			continue;
		}
		int v1[n];
		int v2[m];
		int suma[n];
		printf("digite los elementos del vector 1: ");
		for(i = 0; i < n; i++){
			scanf("%d", &v1[i]);
		}
		printf("digite los elementos del vector 2: ");
		for(i = 0; i < m; i++){
			scanf("%d", &v2[i]);
		}
		for(i = 0; i < n; i++){
			printf("%d ", v1[i]);
		}
		printf("\n");
		for(i = 0; i < m; i++){
			printf("%d ", v2[i]);
		}
		printf("\n");
		printf("Vector suma de vectores: \n", suma[i]);
		for(i = 0; i < n; i++){
			suma [i] = v1[i]+v2[i];
		}
		for(i = 0; i < n; i++){
			printf("%d ", suma[i]);
	    }
	    printf("\nDesea ejecutar nuevamente? \nsi=1 \nno=0");
	    scanf("%d", &repetir);
	}
	printf("Fin del programa");
}
