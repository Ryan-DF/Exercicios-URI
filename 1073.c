#include <stdio.h>

int main() {
    int n, x;

    scanf("%d", &n);

    for(x=1; x<=n; x++){
        if(x%2==0) printf("%d^2 = %d\n", x, x*x);
    }

    return 0;
}

