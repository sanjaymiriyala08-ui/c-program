#include<stdio.h>

int main(){

    int arr[50];
    int n;
    int arr1[50];


    printf("enter the value of n: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    for(int i=0;i<n;i++){
        arr1[i]=arr[i];
    }

    printf("the original array is :");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);

    }

    printf("the copied array is:");
    for(int i=0;i<n;i++){
        printf("%d",arr1[i]);

    }
    return 0;


}