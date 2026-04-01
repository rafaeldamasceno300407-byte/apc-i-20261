#include <stdio.h>

int main () {

    //Declarar variáveis para armazenar o número de países (`195`), o número de idiomas (`7100`), a população mundial (`8274065924`) e a proporção áurea (`1.61803398874989484820`) e, em seguida, imprimir esses valores utilizando os especificadores de formato corretos.

    int num_paises;
    int num_idiomas;
    long long int num_populacao_mundial;
    long double proporcao_aurea;

    num_paises = 195;
    num_idiomas = 7100;
    num_populacao_mundial = 8274065924;
    proporcao_aurea = 1.61803398874989484820L;

    printf ("Numero de paises \"%d\n\"", num_paises);
    printf ("Numero de Idiomas \"%d\n", num_idiomas);
    printf ("Populacao Mundial \"%lld\n", num_populacao_mundial);
    printf("Proporcao Aurea: %.20Lf\n", proporcao_aurea);
    return 0;
}