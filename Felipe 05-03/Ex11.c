/*Uma firma contrata um encanador a 25,00 por dia. 
Crie um programa que solicite o n�mero de dias trabalhados pelo encanador e imprima a quantia l�quida que dever� ser paga,
sabendo-se que s�o descontados 8% para o Imposto de Renda*/

#include <stdio.h>
#include <math.h>

int main (void){
	float v=25;
	float d, q;
	printf("\nInsira o valor de dias trabalhados: ");
	scanf("%f", &d);
	fflush(stdin);
	
	q=(v*d)*0.92;
	
	printf("\n O Salario e de: %.2f", q);
	getch();
	return 0;
}
