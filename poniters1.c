#include<stdio.h>

int main(){
    int age =22;

    int *ptr =&age;

    printf("age is %p\n", &age);
    printf("ptr is %u\n", ptr);
    printf("value is : %u\n", &ptr);
    printf("val is %d\n",age);
    printf("value is : %d\n", *ptr);
    printf("value is : %d\n",*(&age));
    printf("value is : %d\n", &age);


   return 0;

    
}