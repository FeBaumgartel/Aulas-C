//Fa�a um programa que calcule o n�mero m�dio de alunos por turma. Para isto, pe�a a quantidade de turmas e a quantidade de alunos para cada turma. 
//As turmas n�o podem ter mais de 40 alunos.

#include <stdio.h>
#include <math.h>

int main (void){
	int i, alunos, turmas, ver, tot=0;
	float media;
	
	printf("Digite a quantidade de turmas no colegio: ");
	scanf("%i", &turmas);
	fflush(stdin);
	
	for(i=1; i<=turmas; i++){
		do{
			ver=o;
			printf("Digite a quantidade de alunos na turma %i: ",i);
			scanf("%i", &alunos);
			fflush(stdin);
			if(alunos>40){
				printf("Nao pode ter mais de 40 alunos na turma");
				ver=1;
			}
			if(alunos<0){
				printf("Nao pode ter alunos negativos");
				ver=1;
			}
		}while(ver == 1);
		tot+=alunos;
	}
	media=tot/turmas;
	printf("A media de alunos por turma e de: %.2f",media);
	getch();
	return 0;
}
