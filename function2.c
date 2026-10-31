#include<stdio.h>

int sum(int a, int b);
void printtable(int n);
int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
printtable(n);
return 0;


int a,b;
printf("enter the first number:");
scanf("%d",&a);
printf("enter the second number:");
scanf("%d",&b);
int total=sum(a,b);

printf("the sum is %d\n",total);

return 0;



}


void printtable(int n){
    for(int i=1;i<=10;i++){
        printf("%d * %d=%d\n",n,i,n*i);
        
    }

}

int sum(int a,int b){
 return a+b;
}