#include <stdio.h>
//

int main() {

    int opcao = 0;
    int saldo = 10;

do {
    printf("MENU PRINCIPAL\n");
    printf("1 - CONSULTAR SALDO\n");
    printf("2 - RECARREGAR\n");
    printf("3 - VER MENSAGENS\n");
    printf("4 - VER LIGACOES\n");
    printf("5 - SAIR\n");
    printf("ESCOLHA UMA OPCAO\n");
    
    scanf("%i", &opcao);
    while(getchar() != '\n');
    
    switch(opcao) {
        case 1: printf("Seu saldo eh %i R$ \n", saldo);
        break;
        case 2: printf("Escolha entre 10, 20 e 30 R$ \n");
        break;
        case 3: printf("Voce nao tem mensagens \n");
        break;
        case 4: printf("Ultimas ligacoes: (61) 98405-3004 \n");
        break;
        case 5: printf("Obrigado pelo contato! Ate logo \n");
        break;
        default: printf("OPCAO INVALIDA! TENTE NOVAMENTE.\n");

    }} while (opcao == 0);

    return 0;
}