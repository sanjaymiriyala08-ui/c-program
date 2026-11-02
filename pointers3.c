#include<stdio.h>

int main(){


    float price = 100.00;
    float *ptr = &price;
    float **ptr2 = &ptr;

    float _ptr = **ptr2;

    printf("%f\n",_ptr);

    return 0;
    

}