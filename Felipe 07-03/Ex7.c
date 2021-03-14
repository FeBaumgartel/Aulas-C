//Faça um programa que verifique se uma letra digitada é vogal ou consoante

#include <stdio.h>
#include <math.h>
#include <string.h>

int main (void){
	char le;
	
	printf("Digite uma letra: ");
	scanf("%c", &le);
	fflush(stdin);
	
	switch(le){
		case 'a':
			printf("vogal");
			break;
		case 'e':
			printf("vogal");
			break;
		case 'i':
			printf("vogal");
			break;
		case 'o':
			printf("vogal");
			break;
		case 'u':
			printf("vogal");
			break;
		case 'A':
			printf("vogal");
			break;
		case 'E':
			printf("vogal");
			break;
		case 'I':
			printf("vogal");
			break;
		case 'O':
			printf("vogal");
			break;
		case 'U':
			printf("vogal");
			break;
		default:
			printf("consoante");
	}
	getch();
	return 0;
}
