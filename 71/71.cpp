/*riar um algoritmo que leia um valor de hora e informe quantos minutos se pas - saram desde o iníciõ do dia. */
#include <stdio.h>

int main(void){
	float horas;
	printf("Digite o valor em horas:\n");
	scanf("%f", &horas);
	
	printf("Se passaram %f minutos", 60*horas);
	
	return 0;
}
