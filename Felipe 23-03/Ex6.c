//Faça um programa que calcule o valor total investido e o custo médio por CD. O usuário deverá informar a quantidade de CDs e o valor para em cada um.

#include <stdio.h>
#include <math.h>

int main (void){
	int cd, i;
	float preco, tot=0, media;
	
	printf("Digite a quantidade de CDs: ");
	scanf("%i", &cd);
	fflush(stdin);
	
	for(i=1;i<=cd;i++){
		printf("Digite o valor do CD %i: ",i);
		scanf("%f", &preco);
		fflush(stdin);
		tot+=preco;
	}
	media=tot/cd;
	
	printf("O valor total investido nos CDs e de: R$%.2f \nA media de custo por CD e de: R$%.2f", tot, media);
	getch();
	return 0;
}
