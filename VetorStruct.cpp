#include<stdio.h>
#include<string.h>
struct cadastroAluno
{
char nome [50] ;
int telefone[9] ;
int idade[2] ;
} ;
int main ( ) 
{
struct cadastroAluno A[20] ;
int i ;
for ( i = 0 ; i < 3 ; i++)
{
printf ( "Inserir dados aluno %d\n" , i +1);
printf ( "Digite nome:\n" ) ;
scanf("%s",A[i].nome);
printf ("Digite telefone e idade:\n" ) ;
scanf ( " %d %d" , &A[i].telefone,&A[i].idade ) ;
}

printf("nome do terceiro aluno: %s \n" , A[3].nome);
printf("idade do segundo aluno: %d \n" , &A[2].idade);
printf("telefone do primeiro aluno: %d \n" , &A[1].telefone);
}
