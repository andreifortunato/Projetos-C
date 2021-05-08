#include<stdio.h>
#include <locale.h>
int main()
{
int a[10];
int i,j,resto,quociente,decimal,base;
/* Set the locale to the environment default */
 setlocale (LC_ALL, "");
 base=0;
do
{
printf ("Entre a base do número que você quer o resultado\n");
scanf("%d",&base);
}
while ((base!=2) && (base!=4) && (base!=8));
printf ("Dê o número na base 10\n",base);
scanf("%d",&decimal);
i=-1;
do
{
i=i+1;
quociente=decimal/base;
resto=decimal%base;
a[i]=resto;
decimal=quociente;
}
while (quociente!=0);
printf (" O número na base %d é ",base);
for (j=i;j>=0;j--)
printf("%d",a[j]);
}
