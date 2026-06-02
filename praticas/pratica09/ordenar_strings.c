#include <stdio.h>
#include <string.h>

int main() {

//Ler três strings do usuário e exibir as strings em ordem alfabética

    char str1[100], str2[100], str3[100];
    char temp[100];
    printf("Digite a primeira string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Digite a segunda string: ");
    fgets(str2, sizeof(str2), stdin);
    printf("Digite a terceira string: ");
    fgets(str3, sizeof(str3), stdin);

    // comparar str1 e str2
    if (strcmp(str1, str2) > 0) {
        strcpy(temp, str1);
        strcpy(str1, str2);
        strcpy(str2, temp);
    }

    // comparar str1 e str3
    if (strcmp(str1, str3) > 0) {
        strcpy(temp, str1); 
        strcpy(str1, str3);
        strcpy(str3, temp);
    }

    // comparar str2 e str3
    if (strcmp(str2, str3) > 0) {
        strcpy(temp, str2); 
        strcpy(str2, str3);
        strcpy(str3, temp);
    }

    printf("\nStrings organizadas:\n");
    printf("%s", str1);
    printf("%s", str2);
    printf("%s", str3);

    return 0;
}