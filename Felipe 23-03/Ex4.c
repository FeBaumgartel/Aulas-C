//Faça um programa que calcule e mostre a média bimestral da turma. O usuário deve informar a quantidade de notas, bem como cada nota

#include <stdio.h>
#include <math.h>

int main (void){
	int qtdnotas, i;
	float  nota, notas=0;
	
	printf("Digite a quantidade de notas no bimestre\n");
	scanf("%i", &qtdnotas);
	fflush(stdin);
	
	for(i=1;i<=qtdnotas;i++){
		do{
			printf("Digite a %i nota\n", i);
			scanf("%f", &nota);
			fflush(stdin);
		}while(nota>10 || nota<0);
		
		notas+=nota;
	}
	nota=notas/qtdnotas;
	printf("A media e: %.2f", nota);
	getch();
	return 0;
}
