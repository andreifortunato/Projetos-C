//Exemplo: Abrindo, gravando e fechando arquivo
#include <stdio.h>
int main(void)
{
FILE *pont_arq; // cria vari?vel ponteiro para o arquivo
char turma[20]; // vari?vel do tipo string
//abrindo o arquivo com tipo de abertura w
pont_arq = fopen("alunos.txt", "w");
//testando se o arquivo foi realmente criado
for (i=0; i < strlen(turma[20]; i++)
{
   fputc(tentrada[i],*pont_arq);
}
fclose(farq);
*pont_arq = fopen("alunos.txt", "r");
if(pont_arq == NULL)
{
printf("Erro na abertura do arquivo!");
return 1;
}
printf("Escreva uma palavra para testar gravacao de arquivo: ");
scanf("%s", palavra);
//usando fprintf para armazenar a string no arquivo
fprintf(pont_arq, "%s\n", palavra);
//usando fclose para fechar o arquivo
fclose(pont_arq);
printf("Dados gravados com sucesso!");
}
