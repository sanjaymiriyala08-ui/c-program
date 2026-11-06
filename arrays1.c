#include<stdio.h>
 int main(){
    int price[3];

    printf("price of first item:");
    scanf("%d",&price[0]);

    printf("price of second item:");
    scanf("%d",&price[1]);

    printf("price of third item:");
    scanf("%d",&price[2]);

    int final_cost=price[0]+price[1]+price[2];

    int gst_amount=final_cost*0.2;

    int final_amount=final_cost+gst_amount;

    printf("final amount is:%d",final_amount);

    return 0;
 }