#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	unsigned int x;
	scanf("%d", &x);
	printf("%d", x);
	if (sqrt(8*x+1)-round(sqrt(8*x+1)) ==0){
		printf("\n Yes");
	}else{
		printf("\n No");
	}
	
}
