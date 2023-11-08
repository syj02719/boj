#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int C = A + B;
    int D = A - B;
    int E = A * B;
    int F = A / B;
    int G = A % B;

    printf("%d \n", C);
    printf("%d \n", D);
    printf("%d \n", E);
    printf("%d \n", F);
    printf("%d \n", G);
    return 0;
}