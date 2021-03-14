//Faça um programa que gere a tabuada de 1 a 10 de qualquer número. O usuário deve informar de qual número deseja ver a tabuada.

#include <stdio.h>
#include <math.h>

int main (void){
	float num, res;
	int i;
	
	printf("Digite um numero: ");
	scanf("%f", &num);
	fflush(stdin);
	
	for(i=1;i<=10;i++){
		res=i*num;
		
		printf("%.2f+%i=%.2f\n",num,i,res);
	}
	getch();
	return 0;
}
