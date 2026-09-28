#include<stdio.h>
int main()
{
    printf("Hello World\n");

    int i,age;
    for(i=0;i<=5;i++){

        printf("%d\nenter the value of age:\n",i);
        scanf("%d",&age);

        // if(age>=15){
        //     break;

        // }
        

        if(age>10)
        {
            continue;
        }

        printf("the code is running\n");
        printf("the code is running\n");
        printf("the code is running\n");
        printf("the code is running\n");
        printf("the code is not running\n");


    }
    return 0;


}