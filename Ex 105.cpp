#include<stdio.h>
#include<conio.h>
int main(){
	unsigned int nam;
	printf("Hay nhap so nam : ");
	scanf("%d", &nam);
	if ((nam % 4 ==0)&&(nam % 100 !=0)){
		printf("1");
	}else if (nam % 400 ==0){
		printf("1");
	}else{
		printf("0");
	}
	
}
