/*Criar um algoritmo que leia um n�mero (num) e imprima a soma dos n�meros 
m�ltiplos d� 5 no intervalo aberto entre 1 e num. Suponha que num ser� maior 
que zero*/
#include <stdio.h>

int main(void){
	float n1;
	int i;
	printf("Digite um valor:\n");
	scanf("%f", &n1);
	
	printf("1");
	for(i=1; i<=n1; i++){
		if(i%5==0){
		printf("%d\n", i);	
		}
	}
	

	
	return 0;
}
