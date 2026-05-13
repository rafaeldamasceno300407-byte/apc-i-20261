#include <stdio.h>

int main() {

    int numero = 0;
    int primeiro = 1;
    int segundo = 10;

    printf("Entre com um numero entre %i e %i:", primeiro, segundo);
    scanf("%i", &numero);
    while(getchar() != '\n');

    while(numero < 1 || numero > 10) {
        printf("Numero invalido! Tente novamente.\n");
        scanf("%i", &numero);
        while(getchar() != '\n');
        printf("Voce colocou o numero %i \n", numero);
    }

    return 0;
}