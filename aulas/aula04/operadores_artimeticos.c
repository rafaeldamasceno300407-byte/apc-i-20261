#include <stdio.h>
#include <math.h>

int main () {
    //1.entrada
    int operador1;
    int operador2;

    printf ("Entre com um numero inteiro:");
    scanf ("%i", &operador1);
    while (getchar() != '\n');

    printf ("Entre com um numero inteiro:");
    scanf ("%i", &operador2);
    while (getchar() != '\n');
    
    //2.processamento
    int soma = operador1 + operador2;
    int subtracao = operador1 - operador2;
    int multiplicacao = operador1 * operador2;
    float divisao = operador1 / operador2;
    divisao = operador1 * 1.0f / operador2;
    int resto = operador1 % operador2;

    //3.saida
    printf ("soma entre A e B: %i + %i = %i\n", operador1, operador2, soma);
    printf ("subtracao entre A e B: %i - %i = %i\n", operador1, operador2, subtracao);
    printf ("multiplicacao entre A e B: %i * %i = %i\n", operador1, operador2, multiplicacao);
    printf ("divisao entre A e B: %i / %i = %f\n", operador1, operador2, divisao);

    //funcoes da matematica

    double potencia = pow(2, 3); //operador1^operador2
    double raiz_quadrada = sqrt(2);
    double logaritimo = log(2);
    double seno = sin (2 * 3.14/180);

    return 0;
}