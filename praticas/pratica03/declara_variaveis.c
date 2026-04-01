#include <stdio.h>

int main () { 

    //Declarar variáveis para armazenar a idade, o sexo (`M` ou `F`), a altura (ex.: `1.75f`) e o peso (ex.: `72.845`) de uma pessoa e, em seguida, imprimir todos esses valores utilizando os especificadores de formato corretos;

    int idade;
    char sexo;
    float altura;
    float peso;

    idade = 19;
    sexo = 'M';
    altura = 1.72;
    peso = 85.7;

    printf ("Idade: %d\n Sexo: %c\n Altura: %.2f\n Peso: %.2f\n", idade, sexo, altura, peso);

    return 0;
}