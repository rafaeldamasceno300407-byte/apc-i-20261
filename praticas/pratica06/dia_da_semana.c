#include <stdio.h>

int main () {

    int dia = 0;

    printf("Digite um dia da semana: de 1-7, sendo respectivamente de domingo ate sabado: \n");
    scanf("%i", &dia);

    int maior_que_1 = dia > 1;
    int menor_que_7 = dia < 7;

    if (maior_que_1 && menor_que_7) {
        printf ("%i eh dia util \n", dia);
    } else {
        printf ("%i nao eh dia util \n", dia);
    }

    return 0;
}