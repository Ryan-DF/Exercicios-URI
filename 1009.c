#include <stdio.h>

int main() {
    char NOME[100];
    double SALARIO,VENDAS,COMISSAO,TOTAL;

    gets(NOME);
    scanf("%lf", &SALARIO);
    scanf("%lf", &VENDAS);
    COMISSAO = VENDAS * 15 / 100;
    TOTAL = COMISSAO + SALARIO;
    printf("TOTAL = R$ %.2lf\n", TOTAL);

    return 0;
}
