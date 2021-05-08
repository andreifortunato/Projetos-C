#include <stdio.h>
#include <conio.h>
#include <math.h>

int H (int x)
{
	if (x <= 0)
	      return 0;
	  else
	       return H(x-2) + x;
};

int main()
{
	int x;
	printf("Digite um valor para x");
	scanf("%d",H(x));
	
	printf("%d",H(x));
	return 0;
}
