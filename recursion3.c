#include<stdio.h>

int sum(int n);

int main(){
    printf("sum is : %d\n",sum(5));
    return 0;

}

int sum(int n){

int sum =0,i=1;
if (n==1){
    return 1;
}
for(i=1;i<=n;i++){
    sum+=i;    
}
return sum;

}