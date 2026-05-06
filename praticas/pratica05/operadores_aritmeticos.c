#include <stdio.h>

int main () {

    //Ler dois números reais fornecidos pelo usuário e exibir os resultados das quatro operações aritméticas básicas (adição, subtração, multiplicação e divisão)

    float num1, num2;
    printf ("Digite um número:");
    scanf ("%f", &num1);
    while (getchar() != '\n');
    
    printf ("Digite um número:");
    scanf ("%f", &num2);
    while (getchar() != '\n');

    printf ("O primeiro numero foi:%f\n", num1);
    printf ("O segundo numero foi: %f\n", num2);
    
    printf ("A soma entre A e B foi: %2f\n", num1 + num2);
    printf ("A subtraçao entre A e B foi: %2f\n", num1 - num2);
    printf ("A multiplicaçao entre A e B foi: %2f\n", num1 * num2);
    printf ("A divisao entre A e B foi: %2f\n", num1 / num2);

    return 0;
}