/*Entrar com um n�mero no formato CDU e imprimir invertido: UDC. (Exemplo: 
123, sair� 321.) O n�mero dever� ser armazenado em outra vari�vel antes de ser 
impresso. */
#include <stdio.h>
int main() {
    int original, revertido = 0;
    printf("Digite um valor:\n");
    scanf("%d", &original);
    
    while(original){
    	revertido = revertido * 10 + original % 10;
    	original = original/10;
	}
	printf("O numero invertido eh %d", revertido);
    return 0;
}
