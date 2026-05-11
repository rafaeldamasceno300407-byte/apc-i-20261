#include <stdio.h>

//Ler um número inteiro e informar se ele é par ou impar

int main () {

    int numero = 0;
    printf("Digite um valor inteiro:");
    scanf("%i/n", &numero);

    if (numero % 2 == 0) {
        printf("O numero %i eh par \n", numero);
    } else {
        printf("O numero %i eh impar \n", numero);
    }

    return 0;
}