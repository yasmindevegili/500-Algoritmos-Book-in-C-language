/*Entrar com um número e imprimi-lo caso seja maior que 20.*/
#include <stdio.h>
int main(void){
	int n;
	printf("Digite um numero:\n");
	scanf("%d", &n);
	
	if(n>20){
		printf("%d", n);
	}
	
	return 0;
}
