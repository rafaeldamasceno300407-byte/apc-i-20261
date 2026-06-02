#include <stdio.h>
#include <string.h>

int main() {
//Ler N palavras e armazená-las em um vetor de strings. Em seguida, imprimir todas as palavras lidas.

    int N;
    printf("Digite o numero de palavras: ");
    scanf("%d", &N);

    char palavras[100][100];
    for (int i = 0; i < N; i++) {
        printf("Digite a palavra %d: ", i + 1);
        scanf("%s", palavras[i]);
        }

        printf("As palavras digitadas foram:\n");
        for (int i = 0; i < N; i++) {
            printf("%s\n", palavras[i]);
        }

    return 0;
}