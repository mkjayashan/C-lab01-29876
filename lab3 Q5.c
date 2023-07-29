#include<stdio.h>
int main()
{
    //...declare the variables
    int no1,no2,total,avg;
    //...input
    printf("Enter the two numbers");
    scanf("%d %d",&no1,&no2);
    //...process
    total=no1+no2;
    avg=total/2;
    printf("The average is %d\n",avg);

}
