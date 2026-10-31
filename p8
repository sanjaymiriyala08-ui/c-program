#include <stdio.h>

void printsum(int a, int b);

int main(){

    printsum(10, 20);
    printsum(50, 46);
    printsum(84, 79);
    return 0;
    
}
void printsum(int a, int b){
    printf("sum is %d\n", a+b);
    return 0;

}