#include <stdio.h>
#include <math.h>
int main() {
    double A,B,C;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    if( C > fabs(A-B) && C < A+B){
            printf("Perimetro = %.1lf\n", A + B + C);
        }
    else{
        printf("Area = %.1lf\n", (A+B)*C/2);
    }

    return 0;
}

