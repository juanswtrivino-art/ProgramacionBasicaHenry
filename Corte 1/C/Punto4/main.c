#include <stdio.h>
#include<stdlib.h>
int main() {
float a;
float b;
printf("ingrese 2 numeros: ");
scanf("%f %f", &a, &b);
if (a>b){
	printf("%f es mayor \n", a);
	}else if(b>a){
	printf("%f es mayor \n", b);
	}else{
		printf("los numeros son iguales");
}
return 0;
}
