#include<stdio.h>
int main(){

    int n,i=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    while(i<=10){

        printf("multiplication of %d: %d*%d=%d\n",n,n,i,n*i);
        i++;

    }
    return 0;

}