//Fa�a um programa que pe�a um n�mero e imprima se o n�mero � par ou �mpar.

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
