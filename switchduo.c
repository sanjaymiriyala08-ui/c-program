#include<stdio.h>
int main()
{
    int age,marks;
    printf("enter the value of age:");
    scanf("%d",&age);

    printf("enter the value of marks:");
    scanf("%d",&marks);

    switch(age)
    {
        case 16:
            printf("my age is 16\n");
            break;
        case 18:
            printf("my age is 18\n");
            switch(marks)
            {
                case 50:
                    printf("my amrks is 50\n");
                    break;
                case 80:
                   printf("my marks is 80\n");
                   break;
                default:
                   printf("my marks are not valid\n");
                break;
            }
            break;
        case 20:
            printf("my age is 20\n");
            break;
        default :
            printf("my age is not 16,18,20\n");

    }
    return 0;


}