//Construa um algoritmo que leia uma matriz quadrada de ordem 3. Leia uma constante K, diminui a diagonal principal por esta constante e imprima a matriz multiplicada.
#include <stdio.h>

int main (void){
	int a[3][3], k, i, j;
	printf("digite o valor da constante k:  ");
	scanf("%i", &k);
	fflush(stdin);
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("digite o valor da casa %i x %i da matriz A:  ", i+1, j+1);
			scanf("%i", &a[i][j]);
			fflush(stdin);
			if(i==j){
				a[i][j]-=k;
			}
		}
	}
	
	getch();
	return 0;
}
