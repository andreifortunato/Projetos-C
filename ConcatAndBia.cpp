#include<stdio.h>

#define concat(a,b) a ## b

int main(d,g)
{
	
	char d,g[20];
	scanf("%s",&d);
	scanf("%s",&g);
	printf("%s", concat(d,g));
}
