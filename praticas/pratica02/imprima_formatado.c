#include <stdio.h>
#include <math.h>

int main () {

/* 
=============================
      N O T A    L E G A L
==============================
Produto         Qtd Valor Unit
Camiseta        002      39.99
Calca           001      89.90
Meia Social     003      19.99
==============================
Total                   229.85
*/

char Produto[50] = "Produto";
char Quantidade[50] = "Qtd";
char Valor[50] = "Valor";
char Unit[50] = "Unit";
char Camiseta[50] = "Camiseta";
char Calca[50] = "Calca";
char Meia_social[50] = "Meia Social";
char Total[50] = "Total";



int qtd_camiseta;
int qtd_calca;
int qtd_meia_social;

qtd_camiseta = 002;
qtd_calca = 001;
qtd_meia_social = 003;

float unit_camiseta;
float unit_calca;
float unit_meia_social;

unit_camiseta = 39.99;
unit_calca = 89.90;
unit_meia_social = 19.99;

float total = (unit_camiseta*qtd_camiseta) + (unit_calca*qtd_calca) + (unit_meia_social*qtd_meia_social);

printf("========================================\n");
printf("      N O T A    L E G A L             \n");
printf("========================================\n");
printf("%-15s %-5s %-10s %-10s\n", Produto, Quantidade, Valor, Unit);
printf("%-15s %-5d %-10.2f %-10.2f\n", Camiseta, qtd_camiseta, unit_camiseta, unit_camiseta * qtd_camiseta);
printf("%-15s %-5d %-10.2f %-10.2f\n", Calca, qtd_calca, unit_calca, unit_calca * qtd_calca);
printf("%-15s %-5d %-10.2f %-10.2f\n", Meia_social, qtd_meia_social, unit_meia_social, unit_meia_social * qtd_meia_social);
printf("========================================\n");
printf("%-15s %-5s %-10.2f\n", Total, "", total);

    return 0;
}