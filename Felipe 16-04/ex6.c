//Construa um algoritmo que leia duas matrizes 3x3 e gere uma terceira matriz com a soma dos elementos correspondentes de a e b.

#include <stdio.h>

int main (void){
	int a[3][3], b[3][3], c[3][3], i, j;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite o valor da casa %i x %i da matriz A:  ", i+1, j+1);
			scanf("%i", &a[i][j]);
			fflush(stdin);
		}
	}
	printf("\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("digite o valor da casa %i x %i da matriz B:  ", i+1, j+1);
			scanf("%i", &b[i][j]);
			fflush(stdin);
			
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%i   ", c[i][j]);
		}
		printf("\n");
	}
	getch();
	return 0;
}
