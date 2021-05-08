#include<stdio.h>
#include <locale.h>
int main()
{
int fat,i,n; 
/* Set the locale to the environment default */
    setlocale (LC_ALL, "");

printf("Forneça um número inteiro não negativo\n");
scanf("%d",&n);  /*recebe o numero inteiro não negativo fornecido pelo usuário*/
i=n; /* o i(contador) recebe o valor de n(numero inteiro) */
fat=1; /* fat recebe o valor 1 */
while (i>1) /* enquanto i for maior será executado o bloco while*/
{
fat*=i; /* fat recebe fat x i */
i-=1;  /* i recebe o resultado do cálculo acima e subtrai 1*/
}
printf ("O fatorial de %d é %d",n,fat);
}
