#include <stdio.h>

int main() {
    int cod, alcool=0, gasolina=0, diesel=0;
    do{
        scanf("%d", &cod);
        while(cod<1 && cod>4) scanf("%d", &cod);

        if(cod == 1) alcool++;
        else if(cod == 2) gasolina++;
        else if(cod == 3) diesel++;

    }while(cod!=4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}
