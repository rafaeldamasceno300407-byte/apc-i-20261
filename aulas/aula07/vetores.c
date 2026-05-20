#include <stdio.h>

int main() {

    //cria um conjunto de 10 inteiros 
    int numeros[10] = {0}; 
    // 10 gavetas, começa com 0 depois 1 e em diante

    numeros[0] = 10; //gaveta 0 eh igual a 10
    numeros[1] = 6;  //gaveta 1 eh igual a 6
    numeros[2] = 8;  //gaveta 2 eh igual a 8
    numeros[3] = 7; //gaveta 3 eh igual a 7
    numeros[4] = 5;  //gaveta 4 eh igual a 5
    numeros[5] = 9; //gaveta 5 eh igual a 9
    numeros[6] = 4; //gaveta 6 eh igual a 4
    numeros[7] = 3; //gaveta 7 eh igual a 3
    numeros[8] = 5; //gaveta 8 eh igual a 5
    numeros[9] = 1; //gaveta 9 eh igual a 1

    for (int i=0; i < 10; i++) {
        printf("%i, ", numeros[i]);
    }

    //cria um conjunto com 100 caracteres
    char nome[100]; //sabor string
    printf("Entre com seu nome: ");
    scanf("%[^\n]s", nome); //nao tem &
    printf("Ola %s!\n", nome);

    //cria um conjunto de 3 flutuantes
    float notas[3];
    printf("Entre com as suas notas do boletim: ");
    for(int i = 0; i < 3; i++) {
        printf("A%i = ", i+1);
        scanf("%f", &notas[i]);
    }
    printf("Suas notas foram: ");
    for(int i = 0; i < 3; i++) {
        printf("A%i = %.1f\n", i+1, notas[i]);
    }

    return 0;
}