#include<stdio.h>
int countodd(int arr[],int n);


int main(){
    int arr[] = {1, 2, 3, 4, 5};
    printf("the output is:%d\n",*(arr+2));
    printf("the output is:%d\n",*(arr+4));
    return 0;
    
}

int countodd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;

        }

    }
    return count;
    
}