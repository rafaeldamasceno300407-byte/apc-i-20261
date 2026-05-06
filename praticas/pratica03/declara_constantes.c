#include <stdio.h>

int main () {

    //Definir a constante **PI** (`3.14159265`) utilizando `#define` e o número de **Euler** (`2.71828182`) utilizando `const`. Em seguida, imprimir os valores dessas constantes. Tente alterar o valor da constante declarada com `const` para observar o erro gerado pelo compilador

    #define PI 3.14159265
    const float EULER = 2.71828182;

    printf ("Valor de PI: %.8f\n", PI);
    printf ("Valor de Euler: %.8f\n", EULER);

    return 0;
}