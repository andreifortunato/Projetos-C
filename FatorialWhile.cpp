#include<stdio.h>
#include <locale.h>
int main()
{
int fat,i,n;
/* Set the locale to the environment default */
    setlocale (LC_ALL, "");

printf("Forne�a um n�mero inteiro n�o negativo\n");
scanf("%d",&n);
i=n;
fat=1;
while (i>1)
{
fat*=i;
i-=1;
}
printf ("O fatorial de %d � %d",n,fat);
}
