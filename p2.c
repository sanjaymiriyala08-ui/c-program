#include<stdio.h>

int main()
{
    int num,count=0;
    printf("enter the value of num:");
    scanf("%d",&num);

    while(num>=0)
    {
        count++;
        printf("enter the value of num:");
        scanf("%d",&num);

    }

    printf("the number of positive integers is:%d",count);
    return 0;
}