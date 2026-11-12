#include<stdio.h>
void name(char arr[]);

int main(){
    char firstname[50];

    printf("enter the value of firstname:");
    scanf("%49s",&firstname);

    name(firstname);


    return 0;


}

void name(char arr[]){
    printf("the first name is : ");
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);

    }
}