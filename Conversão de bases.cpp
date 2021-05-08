#include<stdio.h>
#include <locale.h>
int main()
{
int a[10];
int i,j,resto,quociente,decimal;
/* Set the locale to the environment default */
    setlocale (LC_ALL, "");
    
    
printf ("Entre com o número na base 10\n");
scanf("%d",&decimal);
i=-1;
 if (i=2,3,4,5,6,7,8);

do
{
i=i+1;
quociente=decimal/2;
resto=decimal%2;
a[i]=resto;
decimal=quociente;

}
while (quociente!=0);

printf (" O binário do número é ");

for (j=i;j>=0;j--)
printf("%d",a[j]);

}
