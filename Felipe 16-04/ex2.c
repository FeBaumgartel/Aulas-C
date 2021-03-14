//Construa um algoritmo que leia um vetor de 5 números reais e mostre a soma, a multiplicação e os números.
#include <stdio.h>

int main (void){
	float a[5], soma=0, mult=1;
	int i;
	
	for(i=0;i<5;i++){
		printf("Digite o numero %i: ", i+1);
		scanf("%f", &a[i]);
		fflush(stdin);
		
		soma+=a[i];
		mult*=a[i];
	}
	printf("Os numeros sao:\n");
	for(i=0;i<5;i++){
		printf("%.2f\n", a[i]);
	}
	printf("A soma dos numeros e: %.2f\n",soma);
	printf("A multipicacao dos numeros e: %.2f\n",mult);
	getch();
	return 0;
}
