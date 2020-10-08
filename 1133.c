#include <stdio.h>

int main() {
    int a,x,y;

    scanf("%d %d", &x, &y);
     if(y>x){
           a=x;
           x=y;
           y=a;
        }

        if(x>y){
            for(y=y+1;y<x; y++)
                if(y%5==2 || y%5==3 ) printf("%d\n", y);
        }

    return 0;
}
