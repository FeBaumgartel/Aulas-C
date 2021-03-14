//Faça um programa que verifique se a letra digitada for: F ou M e imprima uma mensagem: masculino, feminino ou sexo inválido.

#include <stdio.h>
#include <math.h>
#include <string.h>

int main (void){
	char le;
	
	printf("Digite uma letra: ");
	scanf("%c", &le);
	fflush(stdin);
	
	switch(le){
		case 'm':
			printf("Masculino");
			break;
		case 'M':
			printf("Masculino");
			break;
		case 'f':
			printf("Feminino");
			break;
		case 'F':
			printf("Feminino");
			break;
		default:
			printf("Sexo Invalido");
	}
	getch();
	return 0;
}
