//Construa um algoritmo que leia um vetor de 10 caracteres, e diga quantas consoantes foram lidas. Imprima as consoantes.

#include <stdio.h>

int main (void){
	char a[10];
	int i, cont=0;
	
	for(i=0; i<10;i++){
		printf("digite uma letra: \n");
		scanf("%c", &a[i]);
		fflush(stdin);
	}
	printf("\n\n");
	for(i=0; i<10;i++){
		switch(a[i]){
			case 'a':case 'A':
			case 'e':case 'E':
			case 'i':case 'I':
			case 'o':case 'O':	
			case 'u':case 'U':
				break;
			default:
				cont++;
				printf("%c\n", a[i]);
		}
	}
	printf("foram digitadas %i consoantes", cont);
	
	getch();
	return 0;
}
