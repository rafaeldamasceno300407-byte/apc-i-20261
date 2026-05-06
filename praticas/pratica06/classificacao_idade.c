#include <stdio.h>

/*Ler a idade de uma pessoa e classificar como: criança (0-12 anos),
 adolescente (13-17 anos), adulto (18-64 anos) e idoso (65+ anos)*/

int main () {

        int idade = 0;

    printf("Entre com a sua idade:");
    scanf("%i/n", &idade);

        int menor_que_0_anos = idade < 0;
        int maior_que_150_anos = idade > 150;
        int maior_que_0_anos = idade > 0;
        int menor_ou_igual_a_12_anos = idade <= 12;
        int maior_que_12_anos = idade > 12;
        int menor_ou_igual_a_17_anos = idade <= 17;
        int maior_que_17_anos = idade > 17;
        int menor_ou_igual_a_65_anos = idade <= 65;

        if (menor_que_0_anos || maior_que_150_anos) {
            printf("Voce digitou uma idade invalida, insira uma idade valida, entre 0 e 150 anos. \n", idade);
        } else if (maior_que_0_anos && menor_ou_igual_a_12_anos) {
            printf("Voce eh uma crianca \n");
        } else if (maior_que_12_anos && menor_ou_igual_a_17_anos) { 
            printf("Voce eh um adolescente \n");           
        } else if (maior_que_17_anos && menor_ou_igual_a_65_anos) {
            printf("Voce eh um adulto \n");
        } else {
            printf("Voce eh um idoso \n");
        }
        return 0;
}