#include <stdio.h>

int main() {

    int numero = 0;
    int primeiro = 1;
    int segundo = 10;

    do {
        printf("Entre com um numero entre %i e %i:", primeiro, segundo);
        scanf("%i", &numero);
        while(getchar() != '\n');

    } while(numero < primeiro || numero > segundo);
        if (numero < primeiro || numero > segundo) {
            printf("Valor invalido! Tente novamente");
        } else {
            printf("Voce colocou o numero %i \n", numero);
        }

    return 0;
}