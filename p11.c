#include<stdio.h>

void namaste();
void bhojpuri();


int main(){

    printf("enter n for namaste and b for bhojpuri:");
    char ch;
    scanf("%c",&ch);

    if(ch == 'n'){
        namaste();
    }
    else{
        bhojpuri();
    }
}
void namaste(){
    printf("Namaste\n");
    bhojpuri();
    

    
 }
 void bhojpuri(){
    printf("Ka haal ba\n");

 }