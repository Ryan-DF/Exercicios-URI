#include <stdio.h>

int main() {
    int A,B,C;

    scanf("%d %d %d", &A,&B,&C);

    if(C<A && C<B && B<A) printf("%d\n%d\n%d\n", C,B,A);
    else if(B<A && B<C && C<A) printf("%d\n%d\n%d\n", B,C,A);
    else if(C<A && C<B && A<B) printf("%d\n%d\n%d\n", C,A,B);
    else if(A<C && A<B && C<B) printf("%d\n%d\n%d\n", A,C,B);
    else if(A<B && A<C && B<C) printf("%d\n%d\n%d\n", A,B,C);
    else if(B<A && B<C && A<C) printf("%d\n%d\n%d\n", B,A,C);
    printf("\n%d\n%d\n%d\n", A,B,C);

    return 0;
}
