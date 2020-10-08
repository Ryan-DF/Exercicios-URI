#include <stdio.h>

int main() {
    int n,n2,x,y;
    scanf("%d", &n);
    float maux[n],maux2[n];
    n2=n;

    for(;n>=0;n--){
        scanf("%d %d", &x, &y);
        maux[n]=(float)x;
        maux2[n]=(float)y;
    }

    for(n=n2;n>0;n--){
        if(maux2[n]==0)printf("divisao impossivel\n");
        else printf("%.1f\n", maux[n]/maux2[n]);
    }

    return 0;
}
