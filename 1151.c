#include <stdio.h>

int main() {
    int n, x, y, z, aux;
    scanf("%d", &n);

    for(x=0 ,y=0, z=1; x<n; x++){
        if(x<2){
            printf("%d", x);
        }
        else{
            printf("%d", y+z);
            aux = z;
            z = y+z;
            y = aux;
        }
        if(x != n) printf("|");
    }
        printf("\n");

    return 0;
}
