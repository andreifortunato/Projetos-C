#include <stdio.h>
#include <locale.h>
int fat(int n)
{ 
if (n<=1)
return 1;
else
return n*fat(n-1);
}

int pot(int base,int expo)
{
if (expo<1)
return 1;
else
return base*pot(base,expo-1);
}

int main()
{
int n,m,result;
/* Set the locale to the environment default */
    setlocale (LC_ALL, "");

printf("Forneça um expoente e uma base inteiro positivo\n");
scanf("%d%d",&n,&m);
result=fat(n)-pot(m,n);
printf("%d", &result);
}
