#include <stdio.h>

int main () {

    //Ler um número inteiro de quatro dígitos fornecido pelo usuário e exibir sua decomposição em milhares, centenas, dezenas e unidades;

    int num1;
    printf ("Digite um número inteiro de quatro dígitos:");
    scanf ("%i", &num1);
    while (getchar() != '\n');

    printf ("milhares: %i\n", num1 / 1000);
    printf ("centenas: %i\n", (num1 % 1000) / 100);
    printf ("dezenas: %i\n", (num1 % 100) / 10);
    printf ("unidades: %i\n", (num1 % 10));

    return 0;
}