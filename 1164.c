#include <stdio.h>

int main() {
    int n, x, num, aux, p=0;
    scanf("%d", &n);
    x=n;
    int maux[n];

    for(; n>0; n--){
        scanf("%d", &num);
        maux[n] = num;
    }

    for(;x>0; x--){
        aux=maux[x];
        p=0;
        for(maux[x]--;maux[x]>0;maux[x]--){
            if(aux%maux[x] == 0) p=p+maux[x];
            }
        if(p == aux) printf("%d eh perfeito\n", aux);
        else printf("%d nao eh perfeito\n", aux);
    }

    return 0;
}
