//Fa�a um programa que leia dez n�meros inteiros e calcule a diferen�a entre o maior e o menor n�mero do conjunto.

#include <stdio.h>
#include <math.h>

int main (void){
	float i, num, menor, maior, res;
	
	printf("Digite um numero\n");
	scanf("%f", &num);
	fflush(stdin);
	
	menor=num;
	maior=num;
	
	for(i=0; i<9; i++){
		printf("Digite um numero\n");
		scanf("%f", &num);
		fflush(stdin);
		if(num<menor){
			menor=num;
		}
		if(num>maior){
			maior=num;
		}
	}
	res = maior-menor;
	printf("A diferenca entre o maior numero e o menor e: %.2f", res);
	getch();
	return 0;
}
