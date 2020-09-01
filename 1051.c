#include <stdio.h>

int main() {
    double SALARIO,IMPOSTO;
    scanf("%lf", &SALARIO);
    if(SALARIO <= 2000.00){
        printf("Isento\n");
    }
    else if(SALARIO <= 3000.00){
        IMPOSTO = (SALARIO - 2000)*0.08;
        printf("R$ %.2lf\n", IMPOSTO);
    }
    else if(SALARIO <= 4500){
        IMPOSTO = 80 + (SALARIO-3000)*0.18;
        printf("R$ %.2lf\n", IMPOSTO);
    }
    else{
        IMPOSTO = 350 + (SALARIO-4500)*0.28;
        printf("R$ %.2lf\n", IMPOSTO);
    }


    return 0;
}
