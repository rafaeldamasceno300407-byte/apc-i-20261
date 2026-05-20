#include <stdio.h>

int main() {
//Ler n números inteiros e armazená-los em um vetor. Calcular e exibir a média aritmética dos números

int inteiros = 0;
printf("Escolha quantos numeros vc quer para a media artimetica: ");
scanf ("%d", &inteiros);

int numeros[inteiros];

for (int i = 0; i < inteiros; i++){
    float b;
    printf("Escolha os seus numeros: ");
    scanf("%f", &b);
    numeros[i] = b;
}

float soma = 0;
for(int i = 0; i < inteiros; i++){
    soma = soma + numeros[i];
}

printf("A media aritmetica dos seus numeros eh: %.2f", soma / inteiros);

return 0;
}