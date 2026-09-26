#include <stdio.h>

int main() 
{
    int n,digit,firstdigit,lastdigit,count=0,sum,original,reverse=0;
    
    printf("enter the value of n:");
    scanf("%d",&n);
    original=n;
    while(n>0)
        {
           digit=n%10;
            count=count+1;
            reverse=reverse*10+digit;
            n=n/10;
               
        }
            firstdigit=original/pow(10,count-1);
            lastdigit=reverse/pow(10,count-1);


    sum=firstdigit+lastdigit;

    printf("sum=%d\n",sum);
    return 0;
    
}