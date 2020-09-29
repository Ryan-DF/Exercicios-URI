#include <stdio.h>

int main() {

    int tempo, velocidade;
    double combustivel;

    scanf("%d %d", &tempo, &velocidade);

    combustivel = velocidade * tempo/12.0;

    printf("%.3lf\n", combustivel);

    return 0;
}
