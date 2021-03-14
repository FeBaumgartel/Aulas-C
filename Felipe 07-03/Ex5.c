//Faça um programa que peça um número e informe se o número é inteiro ou quebrado.

#include <stdio.h>
#include <math.h>

int main (void){
	float num;
	int inte;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	fflush(stdin);
	
	inte=num;
	if(num==inte){
		printf("Inteiro");
	}else
		printf("Quebrado");
	getch();
	return 0;
}
