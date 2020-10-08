#include <stdio.h>

int main() {
    double nota1, nota2;
    scanf("%lf", &nota1);
    while(nota1<0 || nota1>10){
        printf("nota invalida\n");
        scanf("%lf", &nota1);
    }
    scanf("%lf", &nota2);
    while(nota2<0 || nota2>10){
        printf("nota invalida\n");
        scanf("%lf", &nota2);
    }
    printf("media = %.2lf",(nota1+nota2)/2);

    return 0;
}
