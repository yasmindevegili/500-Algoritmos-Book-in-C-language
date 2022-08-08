/*Entrar com o raio de um cfrculo e imprimir a seguinte saída: 
peri metro: 
area: */
#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main(void){
	float raio;
	printf("Digite o raio de um circulo:\n");
	scanf("%f", &raio);
	
	printf("O perimetro do circulo eh %f e a area eh %f", 2*PI*raio, PI*pow(raio, 2));
	
	return 0;
}
