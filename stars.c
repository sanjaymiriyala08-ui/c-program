#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    i = 0;
    while (i < n) {
        j = 0;
        while (j < ( i + 1)) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}