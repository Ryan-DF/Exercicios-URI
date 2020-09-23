#include <stdio.h>

int main() {
    float VP1,VP2, Aux;
    int CP1,CP2,NP1, NP2;

    scanf("%d %d %f", &CP1, &NP1, &VP1);
    scanf("%d %d %f", &CP2, &NP2, &VP2);

    Aux = (VP1 * NP1) + (VP2 * NP2);

    printf("VALOR A PAGAR: R$ %.2f\n", Aux);

    return 0;
}
