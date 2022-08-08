/*Entrar com os lados a, b, c de um paralelepípedo. Calcular e imprimir a diagonal.*/
#include <stdio.h>
#include <math.h>
int main(void){
	float a, b, c;
	printf("Digite os lados a, b e c de um paralelepipedo respectivamente:\n");
	scanf("%f %f %f", &a, &b, &c);
	
	printf("A diagonal do paralelepipedo eh %f", sqrt(pow(a, 2)+pow(b, 2)+pow(c, 2)));
	
	return 0;
}
