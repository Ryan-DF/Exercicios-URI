#include <stdio.h>

int main() {
    int NFUNCIONARIO, HORAS;
    float VALORHORA, SALARIO;
    scanf("%i", &NFUNCIONARIO);
    scanf("%i", &HORAS);
    scanf("%f", &VALORHORA);

    SALARIO = VALORHORA * HORAS;

    printf("NUMBER = %i\n", NFUNCIONARIO);
    printf("SALARY = U$ %.2f\n", SALARIO);

    return 0;
}
