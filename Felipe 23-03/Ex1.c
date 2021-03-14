//Faça um programa que peça dois números inteiros e gere os números inteiros que estão no intervalo entre eles.

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
	
	printf("Os numeros entre os que voce digitou sao(incluindo os digitados):\n");
	if(num1>=num2){
		for(i=num2;i<=num1;i++){
			printf("%i\n",i);
		}
	}else{
		for(i=num1;i<=num2;i++){
			printf("%i\n",i);
		}
	}
	
	getch();
	return 0;
	}
