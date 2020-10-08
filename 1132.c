#include <stdio.h>

int main() {
    int x,y,a,soma=0;

        scanf("%d %d", &x, &y);
        if(y<x){
           a=x;
           x=y;
           y=a;
        }
            for(;y>=x; y--){
                if(y%13!=0) soma=soma + y;
            }

    printf("%d\n", soma);

    return 0;
}
