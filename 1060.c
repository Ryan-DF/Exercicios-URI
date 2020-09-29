#include <stdio.h>

int main() {
    double a,x;
    int count=0;

    for(x = 0;x < 6; x++){
        scanf("%lf", &a);
        if(a>0) count++;
    }
    printf("%d valores positivos\n", count);

    return 0;
}
