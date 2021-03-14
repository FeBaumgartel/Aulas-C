/*5.	Construa um algoritmo que peça 2 números inteiros e um número real. Calcule e mostre:
a.	o produto do dobro do primeiro com metade do segundo .
b.	a soma do triplo do primeiro com o terceiro.
c.	o terceiro elevado ao cubo.*/

#include <stdio.h>
#include <math.h>

int main (void){
	int num1, num2;
	float num3, a, b, c;
	
	printf("Insira o primeiro numero: ");
	scanf("%i", &num1);
	fflush(stdin);
	printf("\nInsira o segundo numero: ");
	scanf("%i", &num2);
	fflush(stdin);
	printf("\nInsira o terceiro numero: ");
	scanf("%f", &num3);
	fflush(stdin);
	
	a=(num1*2)*(num2/2);
	b=(num1*3)+num3;
	c=num3*num3*num3;
	
	printf("\n A= %f \n B= %f \n C= %f", a, b, c);
	getch();
	return 0;
}
