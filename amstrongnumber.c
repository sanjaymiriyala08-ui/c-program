#include <stdio.h>

int main() {
    int n, original, digit, count = 0;
    long long sum = 0, power, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    if (temp == 0)
        count = 1;
    else {
        while (temp != 0) {
            count++;
            temp /= 10;
        }
    }

    temp = n;
    if (temp == 0)
        sum = 0;
    else {
        while (temp != 0) {
            digit = temp % 10;
            power = 1;

            int i = 1;
            while (i <= count) {
                power *= digit;
                i++;
            }

            sum += power;
            temp /= 10;
        }
    }

    if (sum == original)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}
