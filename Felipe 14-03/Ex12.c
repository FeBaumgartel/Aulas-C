/*Fa�a um programa que leia um n�mero e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inv�lido.*/

#include <stdio.h>
#include <math.h>

int main (void){
	int d;
	
	printf("Informe o numero correspondente ao dia da semana\n");
	scanf("%i", &d);
	fflush(stdin);
	
	switch(d){
		case 1:
			printf("Domingo");
		case 2:
			printf("Segunda");
		case 3:
			printf("Terca");
		case 4:
			printf("Quarta");
		case 5:
			printf("Quinta");
		case 6:
			printf("Sexta");
		case 7:
			printf("Sabado");
		default:
			printf("Valor Inv�lido");
	}
	getch();
	return 0;
}
