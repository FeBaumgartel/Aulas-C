//Fa�a um programa que pe�a um n�mero e se este n�mero for par, transforme-o em �mpar e vice-versa.

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
