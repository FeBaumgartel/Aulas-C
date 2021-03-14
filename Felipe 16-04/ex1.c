//Construa um algoritmo que leia um vetor de 10 números inteiros e mostre a soma dos números.
#include <stdio.h>

int main (void){
	int a[10], i, res=0;
	
	for(i=0;i<10;i++){
		printf("digite o numero %i: ", i+1);
		scanf("%i", &a[i]);
		fflush(stdin);
		res+=a[i];
	}
	printf("a soma e %i", res);
	
	getch();
	return 0;
}
