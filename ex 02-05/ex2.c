#include <stdio.h>

void func(char, int);

int main(void){
	int lin;
	char c;
	printf("Digite qual caracter:");
	scanf("%c", &c);
	fflush(stdin);
	printf("Digite a quantidade de linhas impressas ");
	scanf("%i", &lin);
	fflush(stdin);
	func(c, lin);
	getch();
	return 0;
}

void func(char c, int lin){
	int i,j;
	
	for(i=0; i<lin;i++){
		for(j=0;j<100;j++){
			printf("%c", c);
		}
		printf("\n");
	}
}
