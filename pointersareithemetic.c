#include<stdio.h>

int main(){
    int age=20;
    int *ptr=&age;

    printf("value of age is:%d",ptr);

    ptr++;

    printf("value of age is:%d",ptr);

    return 0;


}