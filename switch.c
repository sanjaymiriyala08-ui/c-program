#include<stdio.h>
int main()
{ 
    int age;
    printf("enter the value of age:");
    scanf("%d",&age);

    switch(age)
    {
        case 15:
            printf("my age is 15\n");
            break;
        case 18:
            printf("my age is 18\n");
            break;
        case 20:
            printf("my age is 20\n");
            break;
        default:
            printf("my age is not 15,18,20\n");
            break;





    }
    return 0;
    
}