#include <stdio.h>

int main() {

    //Ler um caractere digitado pelo usuário e imprimir o caractere informado e seu respectivo código na tabela **ASCII**

    char caractere;
    printf ("Digite um caractere: ");
    scanf ("%c", &caractere);
    printf ("O caractere digitado foi: %c\n", caractere);
    printf ("O codigo ASCII do caractere digitado eh: %d\n", caractere);
    while (getchar() != '\n'); 

    return 0;

}