/*Criar um algoritmo que receba um número real, calcular e imprimir: 
m a parte inteira do número 
m a parte fracionária do número 
m o número arredondado */
#include <stdio.h>
#include <math.h>
int main(void){
	float n;
	printf("Digite um numero real:\n");
	scanf("%f", &n);
	printf("A parte inteira inteira eh %d\nA parte fracionaria eh %f\nO numero arrendondado eh %f", (int)n, n-(int)n, round(n));
	return 0;
}
