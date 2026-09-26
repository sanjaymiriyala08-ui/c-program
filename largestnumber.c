#include<stdio.h>
int main(){
    int n;
    int nN;
    int i = 1;
    printf("enter the number of numbers: ");
    scanf("%d", &nN);
    int largest = 0;
    printf("enter the numbers: ");
    while(i<=nN){
        scanf("%d", &n);
        if(n>largest){
            largest=n;
        }
        i=i+1;
    }
    printf("%d", largest);
    return 0;
}