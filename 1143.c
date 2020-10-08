#include <stdio.h>

int main() {
    int n, x;
    scanf("%d", &n);

    for(x=1; x<=n; x++){
       printf("%d %d %d PUM", x, x*x, x*x*x);
    }

    return 0;
}

