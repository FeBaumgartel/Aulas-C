/*Fa�a um programa que pergunte em que turno voc� estuda. Pe�a para digitar M-matutino ou V-Vespertino ou N-Noturno. 
Imprima a mensagem Bom Dia!, Boa Tarde! ou Boa Noite! ou Valor Inv�lido!, conforme o caso*/

#include <stdio.h>
#include <math.h>

int main (void){
	char t;
	
	printf("Informe o turno em que estuda\n");
	printf("M - Matutino\n");
	printf("V - Vespertino\n");
	printf("N - Noturno\n");
	scanf("%c", &t);
	fflush(stdin);
	
	switch(t){
		case 'M':
			printf("Bom Dia!");
		case 'V':
			printf("Boa Tarde!");
		case 'N':
			printf("Boa Noite!");
		case 'm':
			printf("Bom Dia!");
		case 'v':
			printf("Boa Tarde!");
		case 'n':
			printf("Boa Noite!");
		default:
			printf("Valor Inv�lido");
	}
	getch();
	return 0;
}
