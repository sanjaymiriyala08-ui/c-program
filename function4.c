#include<stdio.h>
#include<math.h>

float areaofsquare(float a);
float areaofcircle(float r);
float areaofrectangle(float l,float b);


int main(){
    float a,r,l,b;
    printf("enter the value of a:");

    scanf("%f",&a);
    printf("enter the value of r:");

    scanf("%f",&r);
    printf("enter the value of l:");

    scanf("%f",&l);
    printf("enter the value of b:");

    scanf("%f",&b);
    
    
    printf("area of square: %f\n", areaofsquare(a));
    printf("area of circle: %f\n", areaofcircle(r));
    printf("area of rectangle: %f\n", areaofrectangle(l,b));

    return 0;


}

float areaofsquare(float a){

   return a*a;
}
float areaofcircle(float r){
    return 3.14*r*r;
}
float areaofrectangle(float l,float b){
    return l*b;
    
}