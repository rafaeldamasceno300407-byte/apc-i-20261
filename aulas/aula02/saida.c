#include <stdio.h> //inclusao de bibliotecas da linguagem
#include <math.h> //biblioteca para funções matemáticas, como cos, sin e tan

int main () {
    double n  = 467.89; //variável do tipo double para armazenar um número real, o double tem mais precisão que o float
    printf("o coseno de %lf é %f\n",n, cos(n)); //função coseno de um numero inteiro n
    printf("o seno de %lf é %f\n",n, sin(n)); //função seno de um numero inteiro n
    printf("o tangente de %lf é %f\n",n, tan(n)); //função tangente de um numero inteiro n
    printf("/n)"); //imprime uma quebra de linha, para deixar a saída mais organizada

    return 0;

}