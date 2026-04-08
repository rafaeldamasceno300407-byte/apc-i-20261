#include <stdio.h>

int main () {

    //Definir constantes para as alíquotas de ICMS (17%), ISS (5%) e PIS (1,65%). Em seguida, ler o valor de um produto e calcular o valor de cada imposto individualmente, além do preço final, utilizando a fórmula: `(1+ICMS+ISS+PIS)×valor

    const float ICMS = 0.17;
    const float ISS = 0.05;
    const float PIS = 0.0165;

    float valor_produto;
    printf ("Digite o valor do produto:");
    scanf ("%f", &valor_produto);
    while (getchar() != '\n');

    printf ("Valor do ICMS: %.2f\n", valor_produto * ICMS);
    printf ("Valor ISS: %.2f\n", valor_produto * ISS);
    printf ("Valor PIS: %.2f\n", valor_produto * PIS);
    printf ("Valor final do produto: %.2f\n", valor_produto * (1 + ICMS + ISS + PIS));

    return 0;
}