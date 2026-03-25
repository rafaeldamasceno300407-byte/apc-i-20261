#include <stdio.h>
int main() {
    /*Entrada de dados*/

    char nome[500]; //variável para armazenar o nome do usuário

    printf("informe o seu nome: \n"); //imprime uma mensagem para o usuário
    scanf("%499[^\n]", nome); //tipo um printf para ler uma string, o & é para passar o endereço da variável
    while(getchar() != '\n'); //limpa o buffer do teclado, para evitar que o próximo scanf leia o enter

    printf("Voce se chama: %s\n", nome); //imprime o nome do usuário, mas ainda não leu o valor da variável

    int idade; //variável para armazenar a idade do usuário

    printf("Informe sua idade: \n"); //imprime uma mensagem para o usuário
    scanf("%i", &idade); //tipo um printf para ler um int, o & é para passar o endereço da variável
    while(getchar() != '\n'); //limpa o buffer do teclado, para evitar que o próximo scanf leia o enter

    printf("voce tem %i anos\n", idade); //imprime a idade do usuário, mas ainda não leu o valor da variável

    float preco; //variável para armazenar o preço do produto
    printf("Informe o preco da passagem: \n"); //imprime uma mensagem para o usuário
    scanf("%f", &preco); //tipo um printf para ler um float, o & é para passar o endereço da variável
    while(getchar() != '\n'); //limpa o buffer do teclado, para evitar que o próximo scanf leia o enter

    printf("O preco da passagem eh %.2f\n", preco); //imprime o preço da passagem, mas ainda não leu o valor da variável, o .2 é para limitar a 2 casas decimais

    return 0;
}