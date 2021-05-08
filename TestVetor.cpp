#include <stdio.h>

int vetor[5]={7,10,2,1,4};
	int x,i;
int main(void)
{
	
	
	i = 6;
	x = vetor[0];
	
	while(i<5)
	{
		if(vetor[i]>x)
		{
			x = vetor[i];
		}
		i++;
	}
	printf("/n O resultado é %d .\n",x);
}
