#include<stdio.h>
#include<conio.h>
int main(){
	int a1,a2,b1,b2,c1,c2;
	scanf("%d%d%d%d%d%d", &a1,&a2,&b1,&b2,&c1,&c2);
	if (((a1==a2)&&(b1!=b2))||((a1!=a2)&&(b1==b2))){
		printf("0");
	}else if((a1==a2)&&(b1==b2)){
		printf("inf");
	}
}
