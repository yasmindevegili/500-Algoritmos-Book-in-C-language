/*Antes de o racionamento de energia ser decretado, quase ningu�m falava em 
quilowatts; mas, agora, todos incorporaram essa palavra em seu vocabul�rio. 
Sabendo-se que 100 quilowatts de energia custa um s�timo do sal�rio m�nimo, 
fazer um algoritmo que receba o valor do sal�rio m�nimo e a quantidade 
de quilowatts gasta por uma resid�ncia e calcule. Imprima: 
o valor em reais de cada quilowatt 
m o valor em reais a ser pago 
o novo valor a ser pago por essa resid�ncia com um desconto de 10%. */
#include <stdio.h>

int main(void){
	float salario_min, qtd_kw, gasto_unitario;
	
	printf("Digite o valor do salario minimo:\n");
	scanf("%f", &salario_min);
	
	printf("Digite a quantidade de kw gasta:\n");
	scanf("%f", &qtd_kw);
	
	gasto_unitario = (salario_min/7)/100;
	printf("O valor gasto por kw sera de %f\n", gasto_unitario);
	printf("O valor total a ser pago sera de %f\n", gasto_unitario*qtd_kw);
	printf("O valor a ser pago com desconto e de %f", (gasto_unitario*qtd_kw)*0.10);
	return 0;
}
