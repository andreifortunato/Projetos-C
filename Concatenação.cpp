#include<stdio.h>

#define concat(a,b) a ## b

 void main(){
	char x,y[20];
	scanf("%s",&x);
	scanf("%s",&y);
	printf("%s", concat(x,y));
}
