#include <stdio.h>

int main () {

    //Ler um número inteiro e exibir os resultados das operações de incremento e decremento nas formas pré-fixada e pós-fixada

    int num1;
    printf ("Digite um numero inteiro:");
    scanf ("%i", &num1);
    while (getchar() != '\n');
    
    printf ("incremento1: %i\n", num1++);
    printf ("incremento2: %i\n", ++num1);
    printf ("decremento1: %i\n", num1--);
    printf ("decremento2: %i\n", --num1);


    return 0;
}