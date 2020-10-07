#include <stdio.h>

int main() {
    int entrada,min,hour, sec;
    scanf("%d", &entrada);

    if(entrada/60 == 0){
        sec = entrada;
        min = 0;
        hour = 0;
    }
    else if(entrada/60>60){
        sec = entrada%60;
        hour = (entrada/60)/60;
        min = (entrada/60)%60;
    }
    else{
        min=entrada/60;
        sec=entrada%60;
        hour=0;
    }
    printf("%d:%d:%d", hour,min,sec);

return 0;
}
