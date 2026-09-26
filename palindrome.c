#include<stdio.h>
int main()
{
    int n,reverse=0,digit,original;
    printf("enter the value of n:");
    scanf("%d",&n);
    
    original =n;

    while(n>0)
    {
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;

    }
    if (reverse==original)
       printf("the number is palindrome");
    else
        printf("the number is not a palindrome");

    return 0;
}