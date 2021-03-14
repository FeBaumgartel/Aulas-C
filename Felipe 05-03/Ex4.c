//Construa um algoritmo que peça uma temperatura em graus Celsius (ºC), transforme e mostre na tela a temperatura em graus Fahrenheit (ºF)
#include <stdio.h>
#include <math.h>

int main (void){
	float far;
	float cel;
	
	printf ("informe a temperatura em celsius: ");
	scanf("%f", &cel);
	fflush(stdin);
	
	far = (cel*9/5) + 32;
	
	printf("\n seu valor em fahrenheit e: %.2f", far);
	
	getch();
	return 0;
}
