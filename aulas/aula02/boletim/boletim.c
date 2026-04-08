#include <stdio.h>
#include <math.h>

int main() {
    /* 
      =============================================
                 *  BOLETIM DE NOTAS  *
      =============================================
      Disciplina               A1   A2    A3    MF
      APC 1                    5.2  2.3   6.0   5.6
      MATEMÁTICA DISCRETA      6.0  5.0    -    5.5
      PRÉ CALCULO              4.0  4.0   4.0   4.0   
    */
    char Disciplina[50] = "Disciplina        "; // valores para disciplina, com 50 caracteres
    char Codigo[50] = "Codigo            "; // valores para codigo, com 50 caracteres
    char Materia_1[50] = "APC 1              "; // valores paras materia1, com 50 caracteres
    char Materia_2[50] = "MATEMATICA DISCRETA"; // valores paras materia2, com 50 caracteres
    char Materia_3[50] = "PRE CALCULO        "; // valores paras materia3, com 50 caracteres
    char MediaFinal[50] = "Media Final        "; // valores para media final, com 50 caracteres

    int codigo_disciplina_1 = 118; // valor para codigo da disciplina 1
    float nota_A1; // valor para nota da atividade 1 da disciplina 1
    float nota_A2; // valor para nota da atividade 2 da disciplina 1
    float nota_A3; // valor para nota da atividade 3 da disciplina 1
    float nota_MF; // valor para nota da media final da disciplina 1

    nota_A1 = 5.2f; // valor para nota da atividade 1 da disciplina 1
    nota_A2 = 7.3f; // valor para nota da atividade 2 da disciplina 1
    nota_A3 = 6.0f; // valor para nota da atividade 3 da disciplina 1
    nota_MF = (nota_A1 + nota_A2 + nota_A3) / 3.0f; // valor para nota da media final da disciplina 1, calculada como a média das notas das atividades
    
    int codigo_disciplina_2 = 257; // valor para codigo da disciplina 2
    float nota_M1; // valor para nota da atividade 1 da disciplina 2
    float nota_M2; // valor para nota da atividade 2 da disciplina 2
    float nota_M3; // valor para nota da atividade 3 da disciplina 2
    float nota_MeF; // valor para nota da media final da disciplina 2

    nota_M1 = 6.0f; // valor para nota da atividade 1 da disciplina 2
    nota_M2 = 5.0f; // valor para nota da atividade 2 da disciplina 2
    nota_M3 = 4.0f; // valor para nota da atividade 3 da disciplina 2, que não foi realizada, então o valor é 0
    nota_MeF = (nota_M1 + nota_M2 + nota_M3) / 3.0f; // valor para nota da media final da disciplina 2, calculada como a média das notas das atividades, considerando a atividade 3 como 0, pois não foi realizada

    int codigo_disciplina_3 = 91; // valor para codigo da disciplina 3
    float nota_N1; // valor para nota da atividade 1 da disciplina 3
    float nota_N2; // valor para nota da atividade 2 da disciplina 3
    float nota_N3; // valor para nota da atividade 3 da disciplina 3
    float nota_MeFi; // valor para nota da media final da disciplina 3

    nota_N1 = 10.0f; // valor para nota da atividade 1 da disciplina 3, que foi realizada, então o valor é 10
    nota_N2 = 4.0f; // valor para nota da atividade 2 da disciplina 3, que foi realizada, então o valor é 4
    nota_N3 = 4.0f; // valor para nota da atividade 3 da disciplina 3, que foi realizada, então o valor é 4
    nota_MeFi = (nota_N1 + nota_N2 + nota_N3) / 3.0f; // valor para nota da media final da disciplina 3, calculada como a média das notas das atividades



    printf ("===============================================================================\n");
    printf ("                                 *  BOLETIM DE NOTAS  *                        \n");
    printf ("===============================================================================\n");
    printf ("%-20s  %5s    A1    A2    A3       MF\n", "Disciplina", "Codigo");
    printf ("%-20s  %05i  %5.1f  %5.1f  %5.1f    %5.1f\n", Materia_1, codigo_disciplina_1, nota_A1, nota_A2, nota_A3, nota_MF);
    printf ("%-20s  %05i  %5.1f  %5.1f  %5.1f    %5.1f\n", Materia_2, codigo_disciplina_2, nota_M1, nota_M2, nota_M3, nota_MeF);
    printf ("%-20s  %05i  %5.1f  %5.1f  %5.1f    %5.1f\n", Materia_3, codigo_disciplina_3, nota_N1, nota_N2, nota_N3, nota_MeFi);

    return 0;
}