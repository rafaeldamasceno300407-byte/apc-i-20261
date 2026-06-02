#include <stdio.h>

int main() {
//Ler uma matriz 3x3 e imprimir apenas os elementos da diagonal principal.

    int matriz[3][3];
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Elementos da diagonal principal:\n");
    for (int i = 0; i < 3; i++) {
        printf("%d", matriz[i][i]);
        if (i < 2) {
            printf (" , ");
        }
    }

    return 0;
}