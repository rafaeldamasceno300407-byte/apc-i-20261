#include <stdio.h>

int main() {
//Ler as notas de uma turma de 10 alunos
//, sendo 2 notas por aluno. Calcular a média de cada aluno e exibir o boletim de notas

    float notas [10][2];
    float media [10];

    for (int i = 0; i < 10; i++) {
        printf("Digite as notas do aluno %d: ", i + 1);
        scanf("%f %f", &notas[i][0], &notas[i][1]);
        media[i] = (notas[i][0] + notas[i][1]) / 2;
        printf("A media do aluno %d eh: %.2f\n", i + 1, media[i]);
    }

    return 0;
}