//Construa um algoritmo que leia duas matrizes 5x5 e gere uma terceira matriz com a subtração dos elementos correspondentes de a e b.
#include <stdio.h>

int main (void){
	int a[5][5], b[5][5], c[5][5], i, j;
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("digite o valor da casa %i x %i da matriz A:  ", i+1, j+1);
			scanf("%i", &a[i][j]);
			fflush(stdin);
		}
	}
	printf("\n\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("digite o valor da casa %i x %i da matriz B:  ", i+1, j+1);
			scanf("%i", &b[i][j]);
			fflush(stdin);
			
			c[i][j]=a[i][j]-b[i][j];
		}
	}
	printf("\n\n");
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("%i   ", c[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
