#include<stdio.h>
int main()
{
    printf("Hello World\n");

    int i,age;
    for(i=0;i<=5;i++){

        printf("%d\nenter the value of age:\n",i);
        scanf("%d",&age);

        if(age>=15){
            break;

        }



    }
    return 0;


}