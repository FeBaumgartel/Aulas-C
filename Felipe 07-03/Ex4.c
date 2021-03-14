//Faça um programa que peça um número e se este número for par, transforme-o em ímpar e vice-versa.

#include <stdio.h>
#include <math.h>

int main (void){
	int num;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	fflush(stdin);
	
	if(num%2==0){
		printf("Mudando...  %i", num+1);
	}else
		printf("Mudando...  %i", num+1);
	getch();
	return 0;
}
