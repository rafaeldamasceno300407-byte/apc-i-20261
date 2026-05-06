#include <stdio.h>

/*Exibir um menu de jogo com as opções: `1 - Novo jogo`, `2 - Continuar jogo`, `3 - Ver pontuação` e `4 - Sair`.
 Ler a opção escolhida e exibir a mensagem correspondente. Caso a opção seja inválida, informar o usuário.*/

int main () {

    int escolha = 0;

    printf("Escolha uma opcao:1 - Novo jogo, 2 - Continuar jogo,  3 - Ver pontuação e 4 - Sair \n");
    scanf("%i", &escolha);

    switch (escolha) {
        case 1: printf("Voce escolheu: Novo jogo \n");
        break;
        case 2: printf("Voce escolheu: Continuar jogo \n");
        break;
        case 3: printf("Voce escolheu: Ver pontuação \n");
        break;
        case 4: printf("Voce escolheu: Sair \n");
        break;
        default: printf("Escolha uma opção valida \n");
    }

    return 0;
}