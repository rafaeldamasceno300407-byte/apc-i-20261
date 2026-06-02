#include <stdio.h>
#include <string.h>

int main() {

//Ler um verbo digitado pelo usuário e verificar se ele termina com "ar"
    
    char verbo[100];
    printf("Digite um verbo:");
    scanf("%s", verbo);
    int len = strlen(verbo);
    if(len >= 2 && verbo[len - 2] == 'a' && verbo[len - 1] == 'r') {
        printf("O verbo termina com 'ar'\n");
    } else {
        printf("O verbo nao termina com 'ar'\n");
    }


    return 0;
}