#include<stdio.h>

int main(){

    float price= 256.50;

    float *ptr=&price;

    float amount= *ptr;
    printf("value of amount:%f\n",amount);

    printf("value of price:%u\n",ptr);

    ptr++;

    printf("value of price:%u\n",ptr);

    return 0;

}