/*Construa um programa que pergunte quanto você ganha por hora e o número de horas trabalhadas no mês.
Calcule e mostre o total do seu salário no referido mês.*/

#include <stdio.h>
#include <math.h>

int main (void){
	float h, m, s;
	printf("\nInsira o valor ganho por hora trabalhada: ");
	scanf("%f", &h);
	fflush(stdin);
	printf("\nInsira o valor de horas trabalhadas no mes: ");
	scanf("%f", &m);
	fflush(stdin);
	
	s=m*h;
	
	printf("\n O Salario e de: %.2f", s);
	getch();
	return 0;
}
