#include <stdio.h>
#include <stdlib.h>

int main()
{ int x;
  int i; 
   printf("\tD� um valor para x menor que 100:/d");
   scanf("%i",&x);
   
   
   for(i = 0; i<=x; x++){
   
  if( i %3 ==0)
      { printf("\t %i Jovens /n",&i);
      }
  if( i %5 ==0)
      { printf("\t %i G�nios /n",&i);
      }
   
   x=i+1;
}
  
  printf("\t %x Todos: /n",&x);
  	
  return 0 ;
}

