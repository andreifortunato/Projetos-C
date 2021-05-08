#include<stdio.h>
#include <string.h>

struct clientes
{
char nome[60];
char endereco[11];
int idade;
int telefone;
char palavra[20];
};
int main()
{ 
FILE *pont_arq;
pont_arq = fopen("alunos.txt", "w");
struct clientes lista_clientes[201];
int i;
for (i=0;i<=10;i++)
{ printf ("Dê o nome do cliente");
scanf("%s",lista_clientes[i].nome);
printf ("Dê o endereço do cliente");
scanf("%s",lista_clientes[i].endereco);
printf ("Dê a idade do cliente");
scanf("%d",&lista_clientes[i].idade);
printf ("Dê o telefone do cliente");
scanf("%d",&lista_clientes[i].telefone);
}
printf ("%s %s %d %d",lista_clientes[70].nome,lista_clientes[45].endereco,lista_clientes[31].telefone,lista_clientes[15].idade);

while (strcmp(palavra,"sair")!=0){
fprintf(pont_arq, "%s ",lista_clientes[i].nome);
fprintf(pont_arq, "%s", lista_clientes[i].endereco);
fprintf(pont_arq, "%d ", &lista_clientes[i].idade);
pont_arq = fopen("alunos.txt", "w");telefone);
printf("Dê o nome do cliente");
scanf("%s",lista_clientes[i].nome);
printf("Dê o endereço do cliente");
scanf("%s",lista_clientes[i].endereco);
printf("Dê a idade do cliente");
scanf("%d",&lista_clientes[i].idade);
printf("Dê o telefone do cliente");
scanf("%d",&lista_clientes[i].telefone);
}
fclose(pont_arq);
printf("Dados gravados com sucesso!");

