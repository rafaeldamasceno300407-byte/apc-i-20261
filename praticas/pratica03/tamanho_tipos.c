#include <stdio.h>

int main() {

    // Utilizar o operador `sizeof()` para imprimir o tamanho (em bytes) dos seguintes tipos: `char`, `short int`, `int`, `long int`, `long long int`, `float`, `double` e `long double`;

    printf ("Tamanho de char: %ld bytes\n", sizeof(char));
    printf ("Tamanho de short int: %ld bytes\n", sizeof(short int));
    printf ("Tamanho de int: %ld bytes\n", sizeof(int));
    printf ("Tamanho de long int: %ld bytes\n", sizeof(long int));
    printf ("Tamanho de long long int: %ld bytes\n", sizeof(long long int));
    printf ("Tamanho de float: %ld bytes\n", sizeof(float));
    printf ("Tamanho de double: %ld bytes\n", sizeof(double));
    printf ("Tamanho de long double: %ld bytes\n", sizeof(long double));

    return 0;
}