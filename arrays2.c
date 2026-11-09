#include<stdio.h>

int main(){
    int aadhar[5];

    int *ptr=&aadhar[0];

    for(int i=0;i<5;i++){
        printf("%d index :",i);
        scanf("%d",(ptr+i));


    }

    for(int i=0;i<5;i++){
        printf("%d index value is :%d\n",i,aadhar[i]);

    }
    return 0;

}
// key points to remember
// aadhar[i]   ≡   *(aadhar + i)   ≡   *(ptr + i)
// &aadhar[i]  ≡   aadhar + i      ≡   ptr + i