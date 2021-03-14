/*Fa�a um programa que implemente uma calculadora simples. O programa deve solicitar os operandos e o operador e mostrar a entrada e o resultado.
 Inclua verificadores de erro para operadores inv�lidos e tentativa de divis�o por zero.
O menu ser� como segue:
[ 1 ] � Adi��o
[ 2 ] � Subtra��o
[ 3 ] � Multiplica��o
[ 4 ] � Divis�o
[ 5 ] � Fim*/

#include <stdio.h>
#include <math.h>

int main (void){
	float num1, num2, res;
	int op, ver;
	
	printf("Informe o valor do primeiro operando\n");
	scanf("%f", &num1);
	fflush(stdin);
	do{
		do{
			ver=0;
			printf("\nInforme o valor do operador");
			printf("\n1-Adicao");
			printf("\n2-Subtracao");
			printf("\n3-Multiplicacao");
			printf("\n4-Divisao");
			printf("\n5-Fim\n");
			scanf("%i", &op);
			fflush(stdin);
			if(op>5 || op<1){
				ver=1;
				printf("\nErro!! Operador inv�lido");
			}
			if(op==5){
				break;
			}
		}while(ver==1);
		do{
			ver=0;
			printf("Informe o valor do segundo operando\n");
			scanf("%f", &num2);
			fflush(stdin);
			if(op==4 && num2==0){
				ver=1;
				printf("\nNao e possivel dividir por 0");
			}
		}while(ver==1);
		switch (op){
			case 1:
				res=num1+num2;
				printf("\n%.2f + %.2f = %.2f", num1, num2, res);
				num1=res;
			case 2:
				res=num1-num2;
				printf("\n%.2f - %.2f = %.2f", num1, num2, res);
				num1=res;
			case 3:
				res=num1*num2;
				printf("\n%.2f * %.2f = %.2f", num1, num2, res);
				num1=res;
			case 4:
				res=num1/num2;
				printf("\n%.2f / %.2f = %.2f", num1, num2, res);
				num1=res;
			default:
				printf("\nasdf");
			}
			
	}while(op!=5);
	getch();
	return 0;
}
