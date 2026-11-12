#include<stdio.h>

int main(){
    int arr[5];
    int n;
    int oldvalue;
    int newvalue;


    printf("enter the value of n:");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }

    printf("enter the oldvalue:");
    scanf("%d",&oldvalue);

    printf("enter the value of newvalue: ");
    scanf("%d",&newvalue);

    for(int i=0;i<n;i++){
        if(arr[i]==oldvalue){
            arr[i]=newvalue;

        }
    }

    printf("the new series is :");
    
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);

    }

    return 0;

}
