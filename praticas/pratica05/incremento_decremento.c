#include <stdio.h>

int main () {
    // Ler um número inteiro e exibir os resultados das operações de incremento e decremento
    int num1;
    printf("Digite um numero inteiro: ");
    
    // CORREÇÃO: Usar aspas duplas no scanf
    scanf("%i", &num1);

    // Exibindo as formas pré e pós-fixadas
    printf("Incremento pré-fixado (++num1): %i\n", ++num1);
    printf("Incremento pós-fixado (num1++): %i\n", num1++); 
    
    printf("Valor final de num1: %i\n", num1);

    return 0;
}