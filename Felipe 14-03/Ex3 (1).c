//Faça um programa que peça um número e imprima se o número é par ou ímpar.

#include <stdio.h>
#include <math.h>

int main (void){
	int num;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	fflush(stdin);
	
	if(num%2==0){
		printf("Par");
	}else
		printf("Impar");
	
	getch();
	return 0;
}
