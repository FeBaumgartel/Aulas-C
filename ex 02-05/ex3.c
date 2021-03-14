#include <stdio.h>

float a();
float b();
float c();
float d();

int main(void){
	char op;
	printf("Digite qual opcao deseja:\n");
	printf("[a]=S = 1/1 + 3/2 + 5/3........+ 99/50\n");
	printf("[b]=S = 1/1 - 2/2 + 3/3..........+ 10/10\n");
	printf("[c]=S = 1000/1 - 997/2 + 994/3......... por 20 vezes\n");
	printf("[d]=S = 480/10 - 475/11 + 470/12....... por 20 vezes\n");
	printf("[f]=FIM\n");
	scanf("%c", &op);
	
	if(op=='a'){
		printf("%f", a());
	}else
	if(op=='b'){
		printf("%f", b());
	}else
	if(op=='c'){
		printf("%f", c());
	}else
	if(op=='d'){
		printf("%f", d());
	}else
	if(op=='f'){
		printf("FIM");
	}
	getch();
	return 0;
}

float a(){
	float num1=1, num2, result;
	for(num2=1; num2<=50; num2++){
		result+=(num1/num2);
		num1+=2;
	}
}
float b(){
	int num1=1, num2;
	float result;
	for(num2=1; num2<=10; num2++){
		if(num1%2==0){
			result-=(num1/num2);
		}else
			result+=(num1/num2);
		num1++;
	}
}
float c(){
	float result;
	int num1=1000, num2;
	for(num2=1; num2<=20; num2++){
		if(num1%2==0){
			result+=(num1/num2);
		}else
			result-=(num1/num2);
		num1-=3;
	}
}
float d(){
	float result;
	int num1=480, num2;
	for(num2=10; num2<40; num2++){
		if(num1%2==0){
			result+=(num1/num2);
		}else
			result-=(num1/num2);
		num1-=5;
	}
}
