//Construa um programa que peça as 4 notas bimestrais e mostre a média

#include <stdio.h>
#include <math.h>

int main (void){
	float n1, n2, n3, n4, m;
	
	printf("Insira a primeira nota: ");
	scanf("%f", &n1);
	fflush(stdin);
	printf("\nInsira a segunda nota: ");
	scanf("%f", &n2);
	fflush(stdin);
	printf("\nInsira a terceira nota: ");
	scanf("%f", &n3);
	fflush(stdin);
	printf("\nInsira a quarta nota: ");
	scanf("%f", &n4);
	fflush(stdin);
	
	m=(n1+n2+n3+n4)/4;
	
	printf("\n A media das notas e= %.2f", m);
	getch();
	return 0;
}
