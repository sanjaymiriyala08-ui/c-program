#include<stdio.h>

int main()
{
    int n,digit,largest=0;
    printf("enter the value of n:");
    scanf("%d",&n);

    while(n>0)
    {
        digit=n%10;
        if(digit>largest)
        {
            largest=digit;
        }
        n=n/10;
    }
    printf("The largest digit is: %d", largest);
    return 0;
}