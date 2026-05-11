#include <stdio.h>

int main() {

    //Ler dois números inteiros fornecidos pelo usuário e exibir os valores lidos
    int num1, num2;
    printf ("Digite o primeiro numero:");
    scanf ("%d", &num1);
    printf ("Digite o segundo numero:");
    scanf ("%d", &num2);
    printf ("O primeiro numero digitado foi: %d\n", num1);
    printf ("O segundo numero digitado foi: %d\n", num2);
    while (getchar() != '\n');

    return 0;
}