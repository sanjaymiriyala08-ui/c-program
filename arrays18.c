#include <stdio.h>

int main(void) {
    int arr[100];
    int n;
    int smallest;

    printf("enter the value of n:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    printf("the smallest number is :%d\n", smallest);
    return 0;
}


