#include <stdio.h>

int main() {

    int numero = 0;
    int Ate =1000;

    printf("Entre com um numero de 1 a %i: \n", Ate);
    scanf("%i", &numero);

    //printf("A tabuada de %i:\n");
    //printf("%i X %i = %i\n", 1, numero, 1 * numero);

    //repete de 1 ate 10
    for(int i=1; i<= Ate; i++) {
        printf("%i X %i = %i\n", i, numero, i * numero);
    }

    for(int i=10; i>0; i--) {
        printf("%i X %i = %i\n", i, numero, i * numero);
    }

    return 0;
}