/*Para vários tributos, a base de cálculo é o salário mínimo. Fazer um algoritmo que 
leia o valor do salário mínimo e o valor do salário de uma pessoa. Calcular e impri -
mir quantos salários mínimos ela ganha. 
*/
#include <stdio.h>
int main(void){
	float salario_min, salario;
	printf("Qual o salario minimo?\n");
	scanf("%f", &salario_min);
	
	printf("Digite o seu salario:\n");
	scanf("%f", &salario);
	
	printf("Voce recebe %f salario minimos", salario/salario_min);
	
	
	return 0;
}
