#include<stdio.h>

int main(){
    int arr[100];
    int n;
    int largest;

    printf("enter the value of n:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    largest=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];


        }

    }

    printf("the largest number is :%d\n",largest);
    
    return 0;




}