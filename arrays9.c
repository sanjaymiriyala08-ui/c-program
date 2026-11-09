#include<stdio.h>
int main(){
    int arr[8]={1,2,14,3,21,56,48,7};
    int count=0;

    for(int i=0;i<8;i++){
        if(arr[i]%7==0){
            count++;

        }
    }

    printf("the count is:%d\n",count);

    return 0;
    
}