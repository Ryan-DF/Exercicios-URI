#include <stdio.h>
#include <math.h>
int main() {
    double A, B, C, nDelta, x1, x2;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    nDelta = pow(B,2) - 4*A*C;
    x1 = (-B + sqrt(nDelta)) / (2*A);
    x2 = (-B - sqrt(nDelta)) / (2*A);

    if (nDelta >=0 && A != 0){
        printf("R1 = %.5lf\n",x1);
        printf("R2 = %.5lf\n",x2);
    }
    else{
        printf("Impossivel calcular");
    }

    return 0;
}
