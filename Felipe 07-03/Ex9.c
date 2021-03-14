/*Faça um programa que peça três notas de um aluno e calcule a média. Analisar a média e imprimir uma das mensagens a seguir:
a) A mensagem "Aprovado", se a média for maior ou igual a 7, com a respectiva média alcançada;
b) A mensagem "Reprovado", se a média for menor do que 7, com a respectiva média alcançada;
c) A mensagem "Aprovado com Distinção", se a média for igual a 10.*/

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
