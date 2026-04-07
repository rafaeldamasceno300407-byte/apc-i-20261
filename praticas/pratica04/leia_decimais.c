#include <stdio.h>

int main() {

    //Ler duas notas de um aluno fornecidas pelo usuário e exibir os valores lidos
    float nota1, nota2;
    printf ("Digite a primeira nota:");
    scanf ("%f", &nota1);
    printf ("Digite a segunda nota:");
    scanf ("%f", &nota2);
    printf ("A primeira nota digitada foi: %f\n", nota1);
    printf ("A segunda nota digitada foi: %f\n", nota2);
    while (getchar() != '\n');

    return 0;
}