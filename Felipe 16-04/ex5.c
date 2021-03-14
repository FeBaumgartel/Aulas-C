//Construa um algoritmo que leia um vetor de 15 palavras e mostre-os na ordem inversa.
#include <stdio.h>

int main (void){
	int i;
	char a[50][15];
	
	for(i=0;i<15;i++){
		printf("digite a palavra %i: ", i+1);
		gets(a[i]);
		fflush(stdin);
	}
	printf("\n\n");
	for(i=14;i>=0;i--){
		printf("%s\n", a[i]);	
	}
	
	getch();
	return 0;
}
