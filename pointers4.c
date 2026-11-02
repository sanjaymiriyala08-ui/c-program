#include<stdio.h>

int main(){

    int i=5;
    int *ptr = &i;
    int **ptr2= &ptr;

    int _ptr=**ptr2;

    printf("the i value is : %d\n",_ptr);

    return 0;
    
}