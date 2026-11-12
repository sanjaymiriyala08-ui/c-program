#include<stdio.h>

int main(){
    int arr[5];
    int n;

    printf("enter the value of array:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
    printf("the numbers are :");
    for(int i=0;i<n;i++){
        if(i%3==0){
            printf("%d ",arr[i]);

        }
    }

}