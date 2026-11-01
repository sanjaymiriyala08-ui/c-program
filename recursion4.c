#include<stdio.h>

int factorial(int n);

int main(){
    printf("factorial is : %d\n",factorial(4));
    return 0;

}

int factorial(int n){

    if (n==0){
        return 1;
    
    }

    int  fact1=factorial(n-1);
    int factN=fact1*n;

    return factN;



}