#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, denom = 1;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    i = 1;
    while (i <= n) {
        denom = denom * 2;              // denom becomes 2^i
        sum = sum + (float)i / denom;
        i++;
    }

    printf("Sum of the series = %f\n", sum);

    return 0;
}