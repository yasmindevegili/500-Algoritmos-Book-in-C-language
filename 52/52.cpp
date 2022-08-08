/*Entrar com o lado de um quadrado e imprimir: 
peri metro: 
area: 
diagonal: 
*/
#include <stdio.h>
#include <math.h>
int main(void){
	float lado;
	printf("Digite o lado de um quadrado:\n");
	scanf("%f", &lado);
	
	printf("O perimetro eh %f, a area eh %f e a diagonal eh %f", 4*lado, lado*lado, lado*sqrt(2));
	
	return 0;
}
