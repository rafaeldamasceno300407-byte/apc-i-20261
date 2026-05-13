#include <stdio.h>

int main () {
    int num1;
    printf("Digite um numero inteiro: ");
    
    // Lê o número
    scanf("%i", &num1);

    // Incremento pré-fixado: aumenta AGORA e já mostra o valor novo
    printf("Incremento pre-fixado (++num1): %i\n", ++num1);

    // Incremento pós-fixado: mostra o valor atual e SÓ DEPOIS aumenta
    printf("Incremento pos-fixado (num1++): %i\n", num1++); 
    
    printf("Valor final de num1: %i\n", num1);

    return 0;
}