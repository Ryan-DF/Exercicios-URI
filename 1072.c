#include <stdio.h>

int main() {
    int a, b, x, in=0, out=0;
    scanf("%d", &a);

    for(x = 0;x < a; x++){
        scanf("%d", &b);
        if(b>=10 && b<=20) in++;
        else out++;
    }
    printf("%d in\n%d out\n", in, out);

    return 0;
}
