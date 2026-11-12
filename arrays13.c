#include<stdio.h>
int main(){
    int arr[]={3,5,6,8,9,10,12};

    for(int i=0;i<7;i++){
        if(i%3==0){
            printf("%d ",arr[i]);

        }
    }
    return 0;

}