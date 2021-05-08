#include <stdio.h>
#include <locale.h>

factr(int n)
{
	int answer;
	
	if (n==1) return (1);
	answer = factr(n-1)*n; //chamada recursiva //
	return(answer);
}
factr(int n) // não recursiva //
{
	int t, answer;
	answer = 1;
	
	for(t=1;t<=n; t++);
	return(answer);
}
	
