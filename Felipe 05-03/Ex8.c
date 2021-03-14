//Construa um programa que peça dois números, calcule e mostre a soma dos mesmos

#include <stdio.h>
#include <math.h>

int main (void){
	float num1, num2, res;
	
	printf("Insira o primeiro numero: ");
	scanf("%f", &num1);
	fflush(stdin);
	printf("\nInsira o segundo numero: ");
	scanf("%f", &num2);
	fflush(stdin);
	
	res=num1+num2;
	
	printf("\n A soma dos numeros e= %.2f", res);
	getch();
	return 0;
}
