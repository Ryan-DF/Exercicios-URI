#include <stdio.h>

int main() {
    int n, fatorial=1;
    scanf("%d", &n);

    for(; n>0; n--){
        fatorial=fatorial*n;
    }

    printf("%d\n", fatorial);

    return 0;
}
