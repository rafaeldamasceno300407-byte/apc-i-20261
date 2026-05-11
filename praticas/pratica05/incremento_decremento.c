#include <stdio.h>

int main() {
    int num1;
    printf("Digite um numero: ");
    scanf("%i", &num1); // Corrigido para aspas duplas

    // Se a ideia era mostrar o pré e o pós incremento, precisa da vírgula:
    printf("incremento: %i e depois %i\n", ++num1, num1++); 
    
    return 0;
}
