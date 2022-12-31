#include<stdio.h>
#include<conio.h>
int main(){
	char x;
	int n;
	scanf("%c", &x);
	scanf("%d", &n);
	if (x=='z'){
		printf("%c", x+230+n);
	}else{
		printf("%c" , x+n);
	}
}
