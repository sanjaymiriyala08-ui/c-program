#include<stdio.h>

int main(){

    int arr[]={1,2,3,4,5,6};
    int sum1=0;
    int sum2=0;

    for(int i=0;i<6;i++){
        if(arr[i]%2==0){
            sum1=sum1+arr[i];

        }else{
            sum2=sum2+arr[i];

        }
    }

    printf("the sum of even numbers is:%d\n",sum1);
    printf("the sum of odd numbers is :%d\n",sum2);

    return 0;
    
}