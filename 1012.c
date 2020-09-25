#include <stdio.h>

int main() {
    double A,B,C;

    scanf("%lf %lf %lf", &A, &B, &C);

    printf("TRIANGULO: %.3lf", A*C/2);
    printf("\nCIRCULO: %.3lf", 3.14159*C*C);
    printf("\nTRAPEZIO: %.3lf", (A+B)*C/2);
    printf("\nQUADRADO: %.3lf", B*B);
    printf("\nRETANGULO: %.3lf", A*B);

    return 0;
}
