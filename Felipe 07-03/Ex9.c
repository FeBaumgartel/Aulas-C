/*Fa�a um programa que pe�a tr�s notas de um aluno e calcule a m�dia. Analisar a m�dia e imprimir uma das mensagens a seguir:
a) A mensagem "Aprovado", se a m�dia for maior ou igual a 7, com a respectiva m�dia alcan�ada;
b) A mensagem "Reprovado", se a m�dia for menor do que 7, com a respectiva m�dia alcan�ada;
c) A mensagem "Aprovado com Distin��o", se a m�dia for igual a 10.*/

#include <stdio.h>
#include <math.h>

int main (void){
	float n1, n2, n3, mf;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	fflush(stdin);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	fflush(stdin);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	fflush(stdin);
	
	mf=(n1+n2+n3)/3;
	
	if(mf==10){
		printf("Aprovado com Distincao");
	}else
	if(mf>=7){
		printf("Aprovado");
	}else
	printf("Reprovado");
	getch();
	return 0;
}
