/*Entrar com a base e a altura de um retângulo e imprimir a seguinte saída: 
peri metro 
area 
diagonal: */
#include <stdio.h>
#include <math.h>

int main(void){
	float base, altura;
	
	printf("Digite a base e a altura do triangulo: \n");
	scanf("%f %f", &base, &altura);
	
	printf("O perimetro eh %f, a area eh %f e a diagonal eh %f", 2*(base+altura), base*altura, sqrt((base*base)+(altura*altura)));

return 0;
}
