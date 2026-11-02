#include<stdio.h>

void square(int n);
void _square(int*n);


int main(){
    
    int number=5;
    square(number); 
    printf("the value of number is : %d\n", number);

    _square(&number);
    printf("the value of number is : %d\n", number);    

    return 0;


}

void square(int n){

    n=n*n;
    printf("the square of a number is : %d\n" ,n);

}

void _square(int*n){

    *n =(*n)*(*n);

    printf("the square of pointer :%d\n",*n);




}