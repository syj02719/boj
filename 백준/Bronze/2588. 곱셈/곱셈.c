#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int n1 = num1 * (num2 % 10);
    int n2 = num1 * (num2 / 10 % 10);
    int n3 = num1 * (num2 / 100);

    int n4 = n3 * 100 + n2 * 10 + n1;

    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);
    printf("%d\n", n4);

    return 0;
}
