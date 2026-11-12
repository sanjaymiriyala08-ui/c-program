#include<stdio.h>

void name(char arr[]);

int main(){

    char firstname[]="Sanjay!";
    char lastname[]="Miriyala";

    name(lastname);
    name(firstname);


    return 0;

}

void name(char arr[]){

    for(int i=0; arr[i]!='\0';i++){
        printf("%c", arr[i]);

    }
    

}