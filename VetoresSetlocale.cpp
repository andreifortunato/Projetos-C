#include <stdio.h>
#include <locale.h>

int main(){
int x [6] = {4,7,9};
/* Defina a localidade para o padrão do ambiente */
    setlocale (LC_ALL, "");
printf("Um componente x[1]=%d\n", x[1]);
printf("Um componente x[4]=%d\n", x[4]);
printf("Um componente x[5]=%d\n", x[5]);

printf("O tamanho ocupado pelo vetor x é de %Id bytes", sizeof(x));

}
