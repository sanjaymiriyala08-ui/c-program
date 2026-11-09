#include<stdio.h>

int main(){

    int arr[]={1,2,3,4,5};
    int firstval;
    int secondval;

    int n;

    scanf("%d",&n);

    if(n<0||n>5){
        printf("invalid\n");
        return 1;

    }
    
    

    for(int i=0;i<n/2;i++){
       firstval=arr[i];
       secondval=arr[n-i-1];
       arr[i]=secondval;
       arr[n-i-1]=firstval;



    }
    for(int i=0;i<n;i++){
        printf("%d,",arr[i]);

    }

    return 0;

}