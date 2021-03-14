/*Supondo que a população de um país A seja da ordem de 80.000 habitantes com uma taxa anual de crescimento de 3% e que a população do país B seja,
 aproximadamente, de 200.000 habitantes com uma taxa de crescimento anual de 1,5%. Fazer um programa que calcule e escreva o número de anos necessários 
 para que a população do país A ultrapasse ou iguale a população do país B, mantidas essas taxas de crescimento.*/
 
#include <stdio.h>
#include <math.h>

int main (void){
	int a=80000, b=200000, ano=0;
	float taxaa=0.03, taxab=0.015;
	
	while(a<b){
		a+=(a*taxaa);
		b+=(b*taxab);
		ano++;
	}
	printf("Levara %i anos para a populacao do pais A passa a populacao do pais B",ano);
	
	getch();
	return 0;
}
