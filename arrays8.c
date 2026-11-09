#include<stdio.h>

int main(){
    int arr[]={1,2,3,4,5,6};
    int sum=0;


    for(int i=0;i<6;i++){
        sum=sum+arr[i];

    }

    printf("the sum of numbers is %d\n",sum);

    return 0;
    
}