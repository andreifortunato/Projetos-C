#include <stdio.h>
#include <math.h>

//Quest�o 2
// Essa quest�o est� dando erro porque pede que mude o segundo 
//argumento que no caso � a letra b e isso causa um erro.
// e o f n�o est� sendo aceito no lugar da main, por isso mudei e diminuiu o erro


int main(int a,int b)
{
	int x,y,resultado;
	x=3*a; // 3*3=9
	y=2*b; // 2*2=4
	
	resultado=x-y; // resultado<- 9-4=5
	
	return resultado;
}
