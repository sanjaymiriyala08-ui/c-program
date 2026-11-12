#include<stdio.h>

void name(char arr[]);

int main(){

    char name[50];
    scanf("%s",name);// giving input of string

    printf("your name is :%s",name);

    return 0;

}

void name(char arr[]){

    for(int i=0; arr[i]!='\0';i++){
        printf("%c", arr[i]);

    }
    

}