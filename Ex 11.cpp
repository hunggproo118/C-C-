#include<stdio.h>
#include<conio.h>
int main (){
	unsigned int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	if (a>=b+c){
		printf("error");
	}else{
		if(b>=c+a){
			printf("error");
		}else{
			if(c>=a+b){
				printf("error");
			}else{
				printf("thoa man");
			}
		}
	}
	 
}
