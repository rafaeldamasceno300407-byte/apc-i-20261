#include <stdio.h>

int main() {

    //Ler um número inteiro positivo e calcular o seu fatorial.

    int inteiro = 0;
    unsigned long long int fatorial = 1;
    printf("Digite um numero inteiro para o calculo de fatorial:");
    scanf("%i/nz", &inteiro);

    if (inteiro < 0) {
        printf("Coloque um valor com fatorial valido.");
    } else {
        int temp = inteiro;
        while (inteiro > 1) {
            fatorial *= inteiro;
            inteiro--;
        }
        printf("o valor de %i fatorial eh: %llu", temp, fatorial);
    }

    return 0;
}