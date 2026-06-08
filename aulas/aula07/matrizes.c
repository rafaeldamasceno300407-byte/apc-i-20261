#include <stdio.h>

int main() {
    int tabela[3][3];
    
    // 0  1  2
    //0 | || || |
    //1 | || || |
    //2 | || || |

    tabela[0][0] = 1;
    // 0  1  2
    //0 |1|| || |
    //1 | || || |
    //2 | || || |

    tabela[0][1] = 0;
    // 0  1  2
    //0 |1||0|| |
    //1 | || || |
    //2 | || || |

    tabela[0][2] = 1;
    // 0  1  2
    //0 |1||0||1|
    //1 | || || |
    //2 | || || |

    tabela[1][0] = 0; // CORREÇÃO: Linha 1, Coluna 0 (para bater com o seu desenho)
    // 0  1  2
    //0 |1||0||1|
    //1 |0|| || |
    //2 | || || |

    // Loop para preencher a tabela inteira via teclado
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("Entre com a posicao [%i,%i]: ", i, j);
            scanf("%i", &tabela[i][j]);
        }
    }

    printf("\n--- SUA TABELA FICOU ASSIM ---\n");
    
    // Loop para mostrar a tabela na tela de forma organizada
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("[%i] ", tabela[i][j]); // Imprime os números lado a lado
        }
        printf("\n"); 
    } 

    return 0;
}