#include<stdio.h>
#include <locale.h>
int main()
{
int fat,i,n; 
/* Set the locale to the environment default */
    setlocale (LC_ALL, "");

printf("Forne�a um n�mero inteiro n�o negativo\n");
scanf("%d",&n);  /*recebe o numero inteiro n�o negativo fornecido pelo usu�rio*/
i=n; /* o i(contador) recebe o valor de n(numero inteiro) */
fat=1; /* fat recebe o valor 1 */
while (i>1) /* enquanto i for maior ser� executado o bloco while*/
{
fat*=i; /* fat recebe fat x i */
i-=1;  /* i recebe o resultado do c�lculo acima e subtrai 1*/
}
printf ("O fatorial de %d � %d",n,fat);
}
