/* Faça um programa que leia a idade de quatro alunos e apresente a mensagem conforme instruções:
a) Se a média de idade dos alunos é inferior de 25, apresentar a mensagem "Turma Jovem";
b) Se a média de idade dos alunos é entre 25 e 40, apresentar a mensagem "Turma Adulta";
c) Se a média de idade dos alunos é acima de 40 anos, apresentar a mensagem "Turma Idosa".*/

#include <stdio.h>
#include <math.h>

int main (void){
	int i1,i2,i3,i4;
	float mi;
	
	printf("Digite a idade do primeiro aluno: ");
	scanf("%i", &i1);
	fflush(stdin);
	printf("Digite a idade do segundo aluno: ");
	scanf("%i", &i2);
	fflush(stdin);
	printf("Digite a idade do terceiro aluno: ");
	scanf("%i", &i3);
	fflush(stdin);
	printf("Digite a idade do quarto aluno: ");
	scanf("%i", &i4);
	fflush(stdin);
	
	mi=(i1+i2+i3+i4)/4;
	
	if(mi<25){
		printf("Turma Jovem");
	}else
	if(mi>=25 && mi<=40){
		printf("Turma Adulta");
	}else
	printf("Turma Idosa");
	getch();
	return 0;
}
