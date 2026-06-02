#include <stdio.h>

int main () {

//Ler o primeiro nome e o último nome de uma pessoa. Concatenar os dois em uma única string e exibi-la na tela  

    char primeiro_nome[50], ultimo_nome[50], nome_completo[100];
    printf("Digite o primeiro nome:");
    scanf("%s", primeiro_nome);
    printf("Digite o ultimo nome: ");
    scanf("%s", ultimo_nome);
    sprintf(nome_completo, "%s %s", primeiro_nome, ultimo_nome);
    printf("Nome completo: %s", nome_completo);
    

    return 0;
}