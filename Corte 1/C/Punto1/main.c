#include<stdio.h>
#include<stdlib.h>
int main() {
	int figura;
	int calculo;
	float B = 0;
	float B2 = 0;
	float B3 = 0;
	float H = 0;
	float R;
	float P;
	float A;
	const float pi = 3.14;
    int repetir = 1;
	while(repetir==1){
	printf("Eliga la figura:\n");
	printf("1. Cuadrado\n");
	printf("2. Circulo\n");
	printf("3. Triangulo\n");
	printf("4. Rectangulo\n");
	printf("Opcion elegida: ");
	scanf("%d", &figura);

	while(figura < 1 || figura > 4){
	printf("Opcion no valida. \n");
	printf("ingrese una opcion valida: ");
	scanf("%d", &figura);
}
	printf("Que quieres calcular: \n");
	printf("1. Area\n");
	printf("2. Perimetro\n");
	printf("Opcion elegida: ");
	scanf("%d", &calculo);

	while(calculo < 1 || calculo > 2){
    printf("opcion no valida: \n");
    printf("ingrese una opcion valida: ");
	scanf("%d", &calculo);
}
	if (figura==1){
		printf("Ingrese la base del cuadrado:");
		scanf("%f", &B);
		if(calculo==1){
			A = B*B;
			printf("El area de su cuadrado es: %f \n", A);
		} else {
			P = 4*B;
			printf("El perimetro de su cuadrado es: %f \n", P);
		}	
	}else if (figura==2){
		printf("Ingrese el radio del circulo:");
		scanf("%f", &R);
		if (calculo==1){
			A = pi*R*R;
			printf("El area del circulo es: %f \n", A);
		} else {
			P = 2*pi*R;
			printf("El perimetro de su circulo es: %f \n", P);
		}
    } else if (figura==3){
		printf("Ingrese la Base del Triangulo:");
		scanf("%f", &B);
		if(calculo==1){
			printf("Ingrese la altura del triangulo:");
		    scanf("%f", &H);
			A = (B*H)/2;
			printf("El area de su triangulo es: %f", A);
		} else {
			printf("Ingrese segundo lado del triangulo:");
			scanf("%f", &B2);
			printf("Ingrese tercer lado del triangulo:");
			scanf("%f", &B3);
			P = B+B2+B3;
			printf("El perimetro del triangulo es: %f \n", P);
		}
    } else if (figura==4){
	printf("Ingrese la base del rectangulo: \n");
	scanf("%f", &B);
	printf("Ingrese la altura del rectangulo: \n");
	scanf("%f", &H);
	if (calculo==1){
		A = B*H;
		printf("Eñ area del rectangulo es: %f \n", A);
	} else if (calculo==2){
		P = 2*B+2*H;
		printf("El perimetro de su rectangulo es: %f \n", P);
	} 
}
 printf("Desea ejecutar nuevamente? Si = 1, No = 2 \n");
 scanf("%d", &repetir);
 printf("Fin del programa");
    }
}
