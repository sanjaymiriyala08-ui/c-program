#include<stdio.h>
 
void calculateprice(float value);

int main(){
    float value=100.00;
    calculateprice(value);
    return 0;

}

void calculateprice(float value){

    value = value +(value*0.18);

    printf("the price is %f\n",value);
    
    

}
