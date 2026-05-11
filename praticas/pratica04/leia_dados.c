#include <stdio.h>

int main() {

    //Ler a idade, a altura (ex.: `1.75`), o sexo (`M` ou `F`) e o peso (ex.: `72.825` de uma pessoa e exibir todas as informações organizadas em formato de ficha cadastral.

    float altura = 0.0; // Variável do tipo ponto flutuante
    char genero = ' '; // Variável do tipo caractere
    float peso = 0.0; // Variável do tipo ponto flutuante
  
    printf ("Qual a sua altura? ");
     scanf("%f", &altura); 
         while (getchar() != '\n');

    printf ("Qual o seu gênero? ");
     scanf(" %c", &genero); 
         while (getchar() != '\n');
 
    printf ("Qual o seu peso? ");
    scanf("%f", &peso); 
        while (getchar() != '\n');

    printf("Altura: %.2f\n", altura);
    printf("Genero: %c\n", genero);
    printf("Peso: %.3f\n", peso);
    while (getchar() != '\n');

    return 0;
}