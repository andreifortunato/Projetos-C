#include <stdio.h>
#include <string.h>
int main()
{
FILE *pont_arq;
char palavra[20];
int idade;
pont_arq = fopen("alunos.txt", "w");
if(pont_arq == NULL)
{
printf("Erro na abertura do arquivo!");
return 1;
}
printf("Escreva o nome do aluno : ");
scanf("%s",palavra);
printf("Escreva a idade do aluno : ");
scanf("%d",&idade);
while (strcmp(palavra,"fim")!=0)
{
fprintf(pont_arq, "%s ", palavra);
fprintf(pont_arq, "%d\n", idade);
printf("Escreva o nome do aluno : ");
scanf("%s",palavra);
printf("Escreva a idade do aluno : ");
scanf("%d",&idade);
}
fclose(pont_arq);
printf("Dados gravados com sucesso!");
}
