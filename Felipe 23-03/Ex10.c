//Fa�a um programa que pe�a dois n�meros inteiros (base e expoente), calcule e mostre o primeiro n�mero elevado ao segundo n�mero.

#include <stdio.h>
#include <math.h>

int main (void){
	int num1, num2, i, res;
	
	printf("Digite o valor da base da potencia: ");
	scanf("%i", &num1);
	fflush(stdin);
	printf("Digite o valor do expoente da potencia: ");
	scanf("%i", &num2);
	fflush(stdin);
	res=num1;
	for(i=1;i<num2;i++){
		res*=num1;
	}
	printf("O resultado da potencia e de: %i",res);
	getch();
	return 0;
}
