#include <stdio.h>

int main() {
    int n,n2,x,y,count,maux[1000];
    scanf("%d", &n);
    n2=n;

    for(;n>0;n--){
        count=0;
        scanf("%d %d", &x, &y);
        if(x>y){
            for(y=y+1;y<x; y++)
                if(y%2!=0) count=count + y;
        }
        if(x<y){
            for(y=y-1;y>x; y--)
                if(y%2!=0) count=count + y;
        }
        maux[n]=count;
    }

    for(n=n2;n>0;n--) printf("%d\n",maux[n]);

    return 0;
}
