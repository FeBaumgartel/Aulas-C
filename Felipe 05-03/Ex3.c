//Construa um algoritmo que peça a temperatura em graus Fahrenheit (ºF), transforme e mostre na tela a temperatura em graus Celsius (ºC). C=5*(F-32)/9

#include <stdio.h>
#include <math.h>

int main (void){
	float far;
	float cel;
	
	printf ("informe a temperatura em fahrenheit: ");
	scanf("%f", &far);
	fflush(stdin);
	
	cel=5*(far-32)/9;
	
	printf("\n seu valor em celsius e: %.2f", cel);
	
	getch();
	return 0;
}
