#include <stdio.h>

int main () {

    int idade;

    printf("Entre com a sua idade:");
    scanf("%i", &idade);
    while (getchar() != '\n');

    printf("Voce eh menor de idade? %i\n", idade < 18);
    printf("Voce tem 15 anos? %i\n", idade == 15);
    printf("Voce naum tem 15 anos? %i\n", idade != 15);
    printf("Voce eh idoso? %i\n", idade > 59);

    return 0;
}