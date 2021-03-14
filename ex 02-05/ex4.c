#include <stdio.h>

int ver(float, float, float);

int main(void){
	float a,b,c;
	
	printf("Informe o valor do lado A do triangulo: ");
	scanf("%f", &a);
	fflush(stdin);
	printf("Informe o valor do lado B do triangulo: ");
	scanf("%f", &b);
	fflush(stdin);
	printf("Informe o valor do lado C do triangulo: ");
	scanf("%f", &c);
	fflush(stdin);
	
	printf("%i", ver(a,b,c));
	
	getch();
	return 0;
}

int ver(float a,float b,float c){
	if(a==b && a==c){
		return 0;
	}else
	if(a!=b && b!=c && a!=c){
		return 2;
	}else
		return 1;
}
