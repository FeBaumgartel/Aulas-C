/*Uma determinada empresa vende uma máquina que possui seis motores. Um de 20 CV, dois de 1 CV, e três de 5 CV, que custam 1500, 300 e 600 reais respectivamente cada motor. 
Existe a necessidade de saber quantos motores deverão ser comprados de cada modelo e quanto custará esta compra. Para isto elabore um programa que: 
a.	Pergunte quantas máquinas serão vendidas; 
b.	Calcule e apresente na tela a quantidade de motores que deverão ser comprados de cada modelo; 
c.	Calcule e apresente na tela o custo total por máquina, o custo por tipo de motor e o custo total da compra.*/

#include <stdio.h>
#include <math.h>

int main (void){
	float cv20=1500, cv5=600, cv1=300, ct, cm;
	int qtd20=1, qtd5=3, qtd1=2;
	int qtd;
	
	printf("Quantas maquinas serao vendidas: ");
	scanf("%i", &qtd);
	fflush(stdin);
	
	qtd20*=qtd;
	qtd5*=qtd;
	qtd1*=qtd;
	
	printf("\nSerao vendidos %i motores de 20CV\n %i motores de 1CV\n %i motores de 5CV", qtd20, qtd1, qtd5);
	
	cm=cv20+(cv5*3)+(cv1*2);
	
	printf("\nO custo por maquina sera de: %.2f", cm);
	
	cv20*=qtd20;
	cv5*=qtd5;
	cv1*=qtd1;
	
	printf("\nSerao vendidos R$%.2f em motores de 20CV\n R$%.2f em motores de 1CV\n R$%.2f em motores de 5CV", cv20, cv1, cv5);
	
	ct=cv20+cv5+cv1;
	
	printf("\nO valor total da compra e de: %.2f", ct);
	
	getch();
	return 0;
}
