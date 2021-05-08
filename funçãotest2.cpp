#include<string.h>
#include<stdio.h>



int main() /* função principal */
{
 char origem[30] = "Aqui vamos de novo!",
destino[30];

strcpy (destino, "constante string");

printf("%s\n", destino);

strcpy(destino, origem);

printf("%s\n", destino);

if (strcmp(origem,destino)==0);
}
