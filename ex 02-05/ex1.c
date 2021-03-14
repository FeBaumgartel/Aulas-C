#include <stdio.h>

int ver(int);

int main(void){
	int num;
	
	printf("Digite um numero: ");
	scanf("%i", &num);
	printf("%i",ver(num));
	
	getch();
	return 0;
}

int ver(int a){
	if(a%2==0){
		return 0;
	}else
		return 1;
}
