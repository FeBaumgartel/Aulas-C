/*Construa um programa que pergunte quanto voc� ganha por hora e o n�mero de horas trabalhadas no m�s.
Calcule e mostre o total do seu sal�rio no referido m�s.*/

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
