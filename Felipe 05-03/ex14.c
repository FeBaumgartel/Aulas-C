   /*	Construa um algoritmo que peça o salário bruto mensal de um funcionário, calcule e apresente os valores conforme modelo abaixo:
Salário Bruto		: R$ 
(-) IR           (15%)	: R$
(-) INSS      (11%)	: R$
(-) Sindicato ( 3%)	: R$
Salário líquido		: R$
Obs.: Descontos = IR + INSS + Sindicato
Salário Líquido = Salário Bruto - Descontos*/


#include <stdio.h>
#include <math.h>

int main (void){
	float sb;
	float ir;
	float inss;
	float sindicato;
	float sl;

	printf("Informe o salario bruto: ");
	scanf ("%f", &sb);
	fflush (stdin);
	ir= sb*0.15;
	inss= sb*0.11;
	sindicato= sb*0.03;
	sl=sb-ir-inss-sindicato;
		
	printf("Salario Bruto: R$ %.2f \n", sb);
	printf("(-)IR        (15%): R$ %2.f \n", ir);
	printf("(-)INSS      (11%): R$ %2.f \n", inss);
	printf("(-)Sindicato ( 3%): R$ %.2f \n", sindicato);
	printf("Salario Liquido   : R$ %.2f \n", sl);
		 
	getch();
	return 0;
}
