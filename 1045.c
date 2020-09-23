#include <stdio.h>
#include <math.h>
int main() {
    double A,B,C,X;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    if(B > A && B > C){
        X = B;
        B = A;
        A = X;
    }
    else if(C > A && C > B){
        X = C;
        C = A;
        A = X;
    }

    if(A < B+C){
            if(A*A == (B*B) + (C*C)){
                printf("TRIANGULO RETANGULO\n");
            }
            if(A*A > (B*B + C*C)){
                printf("TRIANGULO OBTUSANGULO\n");
            }
            if(A*A < (B*B) + (C*C)){
                printf("TRIANGULO ACUTANGULO\n");
            }
            if(A == B && A == C){
                printf("TRIANGULO EQUILATERO\n");
            }
            else if(A == B || A == C || B == C){
                printf("TRIANGULO ISOSCELES\n");
            }
    }
    else printf("NAO FORMA TRIANGULO\n");

return 0;
}
