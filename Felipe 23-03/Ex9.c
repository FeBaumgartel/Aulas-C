//Faça um programa que calcule e mostre a soma dos números pares entre 100 e 200 (inclusive). O usuário deve ter a opção de repetir quantas vezes quiser esta operação.

#include <stdio.h>
#include <math.h>

int main (void){
	float num=0, qtd;
	int i, ver=1, ver2=0;
	do{
		for(i=100;i<201;i++){
			if(i%2==0){
				num+=i;
			}
		}
		printf("A soma dos pares entre 100 e 200 e de: %.0f\n\n",num);
		do{
			ver2=0;
			printf("Deseja fazer esta conta denovo e somar ao resultado ja existente\n");
			printf("[1]Sim\n");
			printf("[2]Nao\n");
			scanf("%i", &ver);
			
			if(ver<1 || ver>2){
				printf("Numero digitado invalido\n");
				ver2=1;
			}
		}while(ver2==1);
	}while(ver!=2);
	printf("A soma total e de: %.0f",num);
	getch();
	return 0;
}
