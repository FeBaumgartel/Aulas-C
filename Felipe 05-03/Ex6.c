//Construa um programa que calcule a área de um círculo.

#include <stdio.h>
#include <math.h>

int main (void){
	float raio, area;
	printf("\nInsira o raio do circulo: ");
	scanf("%f", &raio);
	fflush(stdin);
	
	area=3.14*(raio*raio);
	
	printf("\n A area do circulo e: %.2f", area);
	getch();
	return 0;
}
