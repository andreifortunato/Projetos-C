#include<stdio.h>
#include<stdlib.h>

int main(){
	int N;
	int count;
	int soma;
	printf("Dê um valor para N:");
	scanf("%d",&N);
	
	for(count=1;count<=N;N++);
	{
		soma=count+1;
	};
	printf("soma: %d", &soma);
	return soma;
}

