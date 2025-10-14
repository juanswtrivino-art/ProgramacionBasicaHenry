#include<stdio.h>
int main(){
int a;
int b;
int c;
printf("Ingrese 3 numeros: ");
scanf("%d %d %d", &a, &b, &c);
int max = a, min = a;
if(b > max) max = b;
if(c > max) max = c;
if(b < min) min = b;
if(c < min) min = c;
printf("Maximo: %d\nMinimo: %d\n", max, min);
return 0;
}
