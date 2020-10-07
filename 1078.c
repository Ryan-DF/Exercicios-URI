#include <stdio.h>

int main() {
    int valor,x;
    scanf("%d", &valor);

    for(x=1; x<=10; x++){
        printf("%d x %d = %d\n", x, valor, x*valor);
    }

    return 0;
}
