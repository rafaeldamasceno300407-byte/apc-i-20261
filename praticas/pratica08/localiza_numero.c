#include <stdio.h>

int main (){

    //Ler 10 números inteiros e armazená-los em um vetor. Em seguida
    // ler um número adicional e localizar sua posição no vetor
    // Caso o número não seja encontrado, informar que ele não está no vetor

    int vetor[10];
    int numero_procurado;

    for (int i = 0; i < 10; i++){
        printf("Digite o numero %i: ", i + 1);
        scanf("%i", &vetor[i]);
    } 
    printf("Digite o numero a ser localizado: ");
    scanf("%i", &numero_procurado);
    int posicao = -1;
    for (int i = 0; i < 10; i++){
        if (vetor[i] == numero_procurado){
            posicao = i;
            break;
        }
    }
    if (posicao != -1){
        printf("O numero %i foi encontrado na posicao %i do vetor.\n", numero_procurado, posicao);
    } else {
        printf("O numero %i nao esta no vetor.\n", numero_procurado);
    }
    return 0;
}