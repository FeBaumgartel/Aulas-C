//Construa um programa que converta metros para centímetros

#include <stdio.h>
#include <math.h>

int main (void){
	float m, c;
	printf("\nInsira o valor em metros: ");
	scanf("%f", &m);
	fflush(stdin);
	
	c=m/100;
	
	printf("\n O valor em centimetro e: %.3f", c);
	getch();
	return 0;
}
