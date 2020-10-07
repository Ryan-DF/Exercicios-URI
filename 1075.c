#include <stdio.h>

int main() {
    int valor, x;
    scanf("%d", &valor);

    for(x=1; x<=10000; x++){
        if(x%valor == 2) printf("%d\n",x);
    }

    return 0;
}
