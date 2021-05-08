#include<stdio.h>
#include<math.h>


int F(int N){
	if (N == 1){
	  return 2;
} else if (N > 1){
	return ((N-1)^2)+ F(N-1);
	
}
	
}
int G(int N2){
	if (N2 == 1 || N2 == 2){
	  return 1;
} else if (N2 > 2){
	return 3*G(N2-1)+2*G(N2-1);

}
	
}
int H(int N3){
	if (N3 == 1)
	  return 7;
      } else if (N3 > 1){
	  return H(N3-1)+(3*N3);

}
}


int calculo(){
	
	int a,b,c,d;
	int resultado;
	
	
	resultado = (F(b)-G(a)+H(d))*I(c);
	
	printf("Valor de a: %d", G(a));
	printf("Valor de b: %d", F(a));
	printf("resultado: %d", I(a));
	printf("Valor de d: %d", H(a));
	
}




