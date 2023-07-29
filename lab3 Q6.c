#include<stdio.h>
int main()
{
    //...declare variables
    char name[20];
    int byear,age;
    //...input
    printf("Enter the name ");
    scanf(" %c\n",&name);
    printf("Enter the birth year ");
    scanf(" %d",&byear);

    //...process
    age=2023-byear;
    printf("Age is %d \n",age);

}
