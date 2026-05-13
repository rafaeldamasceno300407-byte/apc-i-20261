#include <stdio.h>

int main() {
//Ler um número inteiro N e imprimir seus múltiplos no intervalo de 1 a 100.

    int numero = 0;
    printf("Digite um numero inteiro:");
    scanf("%i/n", &numero);

    if (numero < 1 || numero > 100) {
        printf("Valor invalido, digite um numero entre 1 e 100 \n");
    } else {
        for (int i = 1; i <= 100; i++){
        if (i % numero == 0) {
            printf("%i ", i);
        } 
        }
    }

    return 0;
}