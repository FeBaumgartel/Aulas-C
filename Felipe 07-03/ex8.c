//Faça um programa que leia 3 valores inteiros e exiba-os em ordem crescente.

#include <stdio.h>
#include <math.h>

int main (void){
	int num1, num2, num3;
	
	printf("Digite o primeiro numero: ");
	scanf("%i", &num1);
	fflush(stdin);
	printf("Digite o segundo numero: ");
	scanf("%i", &num2);
	fflush(stdin);
	printf("Digite o terceiro numero: ");
	scanf("%i", &num3);
	fflush(stdin);
	
	if(num1<=num2 && num1<=num3){
		if(num2<=num3){
			printf("%i, %i, %i", num1, num2, num3);
		}else
			printf("%i, %i, %i", num1, num3, num2);
	}else
	if(num2<=num1 && num2<=num3){
		if(num1<=num3){
			printf("%i, %i, %i", num2, num1, num3);
		}else
			printf("%i, %i, %i", num2, num3, num1);
	}else
	if(num1<=num2){
		printf("%i, %i, %i", num3, num1, num2);
		}else
			printf("%i, %i, %i", num3, num2, num1);
	
	getch();
	return 0;
}
