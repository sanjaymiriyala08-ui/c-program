#include<stdio.h>
int main()
{
    int n,reverse=0,digit;
    printf("enter the value of n:");
    scanf("%d",&n);

    while(n>0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;

    }

    printf("the reverse number is: %d",reverse);
    return 0;

}