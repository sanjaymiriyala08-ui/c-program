#include<stdio.h>

int main(){
    int age = 22;
    int _age=23;

    int *ptr=&age;

    int *ptr1= &_age;

    printf("value of difference is:%d\n",ptr-ptr1);

    ptr1=&age;

    printf("comparision:%u\n",ptr==ptr1);

    

    return 0;



}