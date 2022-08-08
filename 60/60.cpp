/*Entrar com a razão de uma PA e o valor do 1 2termo. Calcular imprimiro 10 termo da serie*/
#include <stdio.h>
int main(void){
	float pa, termo;
	printf("Digite a razao do PA:\n");
	scanf("%f", &pa);
	
	printf("Digite o valor do primeiro termo:\n");
	scanf("%f", &termo);
	
	printf("O decimo termo sera: %f", (9*pa)+termo);
	
	
	
	return 0;
}
