#include <stdio.h>

int main() {
    int n, m, x, mAux[10000], valores;
    scanf("%d", &n);

    for(m = n;m > 0; m--){
        scanf("%d", &valores);
        mAux[m] = valores;
    }
    for(;n > 0; n--){
        if(mAux[n] == 0) printf("NULL\n");
        else if(mAux[n]%2 != 0){
            if(mAux[n] > 0) printf("ODD POSITIVE\n");
            else printf("ODD NEGATIVE\n");
        }
        else{
            if(mAux[n] > 0) printf("EVEN POSITIVE\n");
            else printf("EVEN NEGATIVE\n");
        }
    }

    return 0;
}
