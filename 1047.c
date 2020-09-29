#include <stdio.h>

int main() {
    int horai, horaf, horat, minutoi, minutof, minutot;

    scanf("%d %d %d %d", &horai, &minutoi, &horaf, &minutof);

    if(minutof-minutoi<0){
        minutot = 60 + (minutof-minutoi);
        if(horaf-horai<=0) horat = 24 + (horaf-horai-1);
        else horat = horaf-horai-1;
    }
    else{
        minutot = minutof-minutoi;
        if(horaf-horai<0) horat = 24 + (horaf-horai);
        else if(horaf-horai==0 && minutot==0) horat = 24;
        else horat = horaf-horai;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horat, minutot);


    return 0;
}
