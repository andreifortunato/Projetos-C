#include <stdio.h>
#include <locale.h>
int main(){
}
int pot(int base,int expoente)

int i;	
pot1=1;
for (i=1;i<=expoente;i++)
pot1*=base;
return pot1;
}
int main()
{
int A,B;
/* Set the locale to the environment default */
    setlocale (LC_ALL, "");
printf("D� o n�mero e seu expoente inteiros\n");
scanf("%d%d",&A,&B);
printf("O n�mero %d elevado � %d � igual a %d",A,B,pot(A,B));
return(0)
}
}
