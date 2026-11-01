#include<stdio.h>

float temperature(float c);

int main(){
    printf("the converted temperature is : %f",temperature(37));
    return 0;

}

float temperature(float c){

    float F=(c*9/5)+32;

    return F;


}