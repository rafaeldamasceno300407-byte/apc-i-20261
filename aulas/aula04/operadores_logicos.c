#include <stdio.h>

int main () {

    int idade;

    printf("Entre com a idade:");
    scanf("%i\n", &idade);
    while (getchar() != '\n');

    // && => 0 false E qualquer outra coisa = sempre falso
    printf("Voce eh uma crinca? %i\n", idade >= 0 && idade <= 12); 
    printf("Voce eh um adolescente? %i\n", idade >= 13 && idade < 16);
    printf("Voce eh um jovem? %i\n", idade >= 16 && idade < 21);
    
    // || => 1 verdadeiro  OU qualquer cois = sempre verdade 
    printf("Voce tem prioridade para vacinar? %i\n", idade <= 6 || idade >= 59);

    // ! => 0 NAO verdadeiro = Falso, NAO falso = verdadeiro
    printf("Voce naum pode votar? %i\n", !(idade >= 16));

    return 0;
}