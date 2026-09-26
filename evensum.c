#include<stdio.h>
int main()
{
    int n,i=1,sum1=0,sum2=0;
    printf("enter the value of n:");
    scanf("%d",&n);

    while(i<=n)
    {
        if(i%2==0)
        sum1=sum1+i;
        else
        sum2=sum2+i;
        i++;
    }

    printf("the sum of even :%d\n",sum1);
    printf("the sum of odd :%d\n",sum2);

    
}