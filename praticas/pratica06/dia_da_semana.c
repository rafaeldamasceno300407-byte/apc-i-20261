#include <stdio.h>

int main () {

    int dia = 0;

    printf("Digite um dia da semana: de 1-7, sendo respectivamente de domingo ate sabado: \n");
    scanf("%i", &dia);

     switch(dia) {
        case 1: printf("Domingo nao eh um dia util\n");
        break;
        case 2: printf("Segunda eh um dia util \n");
        break;
        case 3: printf("Terca eh um dia util \n");
        break;
        case 4: printf("Quarta eh um dia util \n");
        break;
        case 5: printf("Quinta eh um dia util \n");
        break;
        case 6: printf("Sexta eh um dia util \n");
        break;
        case 7: printf("Sabado nao eh um dia util \n");
        break;
        default: printf("dia nao valido, digite um dia valido \n");
        break;
    }

    return 0;
}