#include<stdio.h>
int main()
{
    //...declaring variables
    int no1,no2;
    //...input
    printf("Enter the two numbers");
    scanf("%d %d",&no1,&no2);
    //...display output
    //...Before swap
    printf("\nBefore swap \n");
    printf("First number: %d\n",no1);
    printf("Second number: %d\n",no2);
    //...After swap
    printf("\nAfter swap \n");
    printf("First number: %d\n",no2);
    printf("Second number: %d\n",no1);

}
