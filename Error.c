#include<stdio.h>
#include<locale.h>
int main()
{ int *
p,x;
p=NULL;
x=18 % 10;
p=&x;
x= 56/(*p);
}
