#include<stdio.h>

int main(){
    char star = '*';

    char *ptr = &star;

    printf("value of character is:%u\n",ptr);

    ptr++;

    printf("value of character is :%u\n",ptr);

    return 0;

}
