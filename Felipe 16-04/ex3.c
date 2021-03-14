//Construa um algoritmo que leia um vetor de 10 números reais e mostre-os na ordem inversa
#include <stdio.h>

int main (void){
	int i;
	float a[10];
	
	for(i=0;i<10;i++){
		printf("digite o numero %i: ", i+1);
		scanf("%f", &a[i]);
		fflush(stdin);
	}
	printf("\n\n");
	for(i=9;i>=0;i--){
		printf("%.2f\n", a[i]);	
	}
	
	getch();
	return 0;
}
