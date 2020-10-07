#include <stdio.h>

int main() {
    int cod, quant;
    float valor=0;
    scanf("%d %d", &cod, &quant);

    for(;quant>0;quant--){
        switch(cod){
    case 1:
        valor = valor+4;
        break;
    case 2:
        valor = valor+4.5;
        break;
    case 3:
        valor = valor+5;
        break;
    case 4:
        valor = valor+2;
        break;
    case 5:
        valor = valor+1.5;
        break;
        }
    }
    printf("Total: R$ %.2f\n", valor);

    return 0;
}
