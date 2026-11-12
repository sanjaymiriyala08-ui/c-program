#include<stdio.h>

int main(){

    int arr[100];
    int count=0;
    int i,j,n;

    printf("enter the number of values of elements:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("element-%d:",i);
        scanf("%d",&arr[i]);

    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
                break;

            }

        }
    }
    printf("the number of duplicate numbers is %d\n",count);
    return 0;

}