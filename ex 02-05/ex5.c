#include <stdio.h>
#include <math.h>

void calc_data(int, int, int);
int ver(int, int, int);

int main(void){
	int d, m, a;
	do{
		printf("Digite o dia: ");
		scanf("%i", &d);
		fflush(stdin);
		printf("Digite o mes: ");
		scanf("%i", &m);
		fflush(stdin);
		printf("Digite o ano: ");
		scanf("%i", &a);
		fflush(stdin);
		if(ver(d,m,a)==0){
			printf("Data invalida\n\n");
		}
	}while(ver(d,m,a)==0);
	calc_data(d,m,a);
	
	getch();
	return 0;	
}

int ver(int d, int m, int a){
	if(m>12 || m<1){
		return 0;
	}
		
	if(d<1){
		return 0;
	}
		
	if(a<1){
		return 0;
	}
		
	if(m%2==1){
		if(d<=31){
			return 1;
		}else
			return 0;
	}else{
		if(m==2){
			if(a % 4 == 0 && (a % 400 == 0 || a % 100 != 0)){
				if(d<=29){
					return 1;
				}else
					return 0;
			}else{
				if(d<=28){
					return 1;
				}else
					return 0;
			}
		}else{
			if(d<=30){
				return 1;
			}else
				return 0;
		}
	}
	return 0;
}

void calc_data(int d, int m, int a){
	d+=5;
	if(m%2==1){
		if(d>31){
			d-=31;
			m++;
		}
	}else{
		if(m==2){
			if(a % 4 == 0 && (a % 400 == 0 || a % 100 != 0)){
				if(d>29){
					d-=29;
					m=3;
				}
			}else{
				if(d>28){
					d-=28;
					m=3;
				}
			}
		}else{
			if(m==12){
				if(d>30){
					d-=30;
					m=1;
				}
			}else{
				if(d>30){
					d-=30;
					m++;
				}
			}
		}
	}
	printf("%i / %i / %i", d,m,a);
}
