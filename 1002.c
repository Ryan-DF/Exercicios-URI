#include <stdio.h>

int main() {
    double pi, raio, area;
    pi = 3.14159;
    scanf("%lf", &raio);
    area = pi * pow(raio,2);
    printf("A=%.4f\n", area);
    return 0;
}
