/*Criar um algoritmo que receba um n�mero real, calcular e imprimir: 
m a parte inteira do n�mero 
m a parte fracion�ria do n�mero 
m o n�mero arredondado */
#include <stdio.h>
#include <math.h>
int main(void){
	float n;
	printf("Digite um numero real:\n");
	scanf("%f", &n);
	printf("A parte inteira inteira eh %d\nA parte fracionaria eh %f\nO numero arrendondado eh %f", (int)n, n-(int)n, round(n));
	return 0;
}
