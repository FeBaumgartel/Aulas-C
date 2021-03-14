/*Elabore um programa para calcular a quantidade necessária de latas de tinta para pintar uma parede com X metros de largura por H metros de altura. 
Considere que o consumo de latas de tinta por metro quadrado é 3 litros e a quantidade de tinta por lata é 3,6 litros*/

#include <stdio.h>
#include <math.h>

int main (void){
	float l;
	float x, h, area;
	float res;
	
	printf("\nInsira o valor da largura da parede: ");
	scanf("%f", &x);
	fflush(stdin);
	printf("\nInsira o valor da altura da parede: ");
	scanf("%f", &h);
	
	area=x*h;
	
	l=area*3;
	
	res=l/3.6;
	
	printf("A quantidade de latas e: %.2f",res);
	
	getch();
	return 0;
}
