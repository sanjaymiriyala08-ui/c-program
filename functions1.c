#include<stdio.h>

int sum(int a, int b);

int main()
{
int a,b;
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
int total=sum(a,b);

printf("the sum is %d\n",total);

return 0;



}

int sum(int a,int b){
 return a+b;
 
}