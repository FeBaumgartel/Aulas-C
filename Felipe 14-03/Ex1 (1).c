//Faça um programa que peça dois números e imprima o maior deles.

#include <stdio.h>
#include <math.h>

int main (void){
	float num1, num2;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &num1);
	fflush(stdin);
	printf("Digite o segundo numero: ");
	scanf("%f", &num2);
	fflush(stdin);
	
	if(num1>num2){
		printf("%.2f", num1);
	}else
		printf("%.2f", num2);
	getch();
	return 0;
}
