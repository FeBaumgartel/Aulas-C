//Fa�a um programa que pe�a dois n�meros inteiros e gere os n�meros pares que est�o no intervalo entre eles.

#include <stdio.h>
#include <math.h>

int main (void){
	int i, num1, num2;
	
	printf("Digite um numero\n");
	scanf("%i", &num1);
	fflush(stdin);
	printf("Digite outro numero\n");
	scanf("%i", &num2);
	fflush(stdin);
	
	system("cls");
	printf("Os numeros pares entre os que voce digitou sao(incluindo os digitados):\n");
	if(num1>=num2){
		for(i=num2;i<=num1;i++){
			if(i%2==0){
				printf("%i",i);
			}
		}
	}else{
		for(i=num1;i<=num2;i++){
			if(i%2==0){
				printf("%i",i);
			}
		}
	}
	getch();
	return 0;
}
