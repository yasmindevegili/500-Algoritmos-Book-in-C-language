/*Ler um n�mero e, se ele for positivo, imprimir seu inverso; caso contr�rio, imprimir o valor absoluto do n�mero. */
#include <stdio.h>
#include <math.h>
int main(void){
	float n;
	printf("Digite um numero:\n");
	scanf("%f", &n);
	
	if(n>0){
		printf("Seu inverso eh %f", 1/n);
	}
	else if(n<0){
		printf("O valor absoluto eh %d", abs(n));
	}
	else{
		printf("0 nao eh valido");
	}
	
	
	return 0;
}
