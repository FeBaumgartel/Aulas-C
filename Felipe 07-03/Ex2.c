//Fa�a um programa que pe�a um valor e mostre na tela se o valor � positivo ou negativo.

#include <stdio.h>
#include <math.h>

int main (void){
	float num;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	fflush(stdin);
	
	if(num>0){
		printf("Positivo");
	}else
	if(num<0){
		printf("Negativo");
	}else
		printf("Nulo");
	getch();
	return 0;
}
