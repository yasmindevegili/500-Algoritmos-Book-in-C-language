/*Para v�rios tributos, a base de c�lculo � o sal�rio m�nimo. Fazer um algoritmo que 
leia o valor do sal�rio m�nimo e o valor do sal�rio de uma pessoa. Calcular e impri -
mir quantos sal�rios m�nimos ela ganha. 
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
