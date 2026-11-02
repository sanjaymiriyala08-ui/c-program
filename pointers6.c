#include<stdio.h>

void swap(int *a,int *b);

int main(){

    int x=5,y=10;

    printf("the value of x is:%d\n",x);
    printf("the value of y is:%d\n",y);

    swap(&x,&y);

    printf("the value of x is:%d\n",x);
    printf("the value of y is:%d\n",y);

    return 0;
    



}

void swap(int *a,int *b){

    int temp;
    temp=*a;
    *a=*b;
    *b=temp;



}