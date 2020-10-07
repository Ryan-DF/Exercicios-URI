#include <stdio.h>

int main() {
    int x,y;
    do{
        scanf("%d %d", &x,&y);
        if(y>x) printf("Crescente\n");
        if(y<x) printf("Decescente\n");
    }while(x!=y);

    return 0;
}
