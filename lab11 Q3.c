#include<stdio.h>
int pro(int a,int b)
{
    if(a>=0 && b>=0)
    {
        return a*b;

    }
    else return -1;

}
int main()
{
    int num1,num2;
    printf("Enter the two numbers");
    scanf("%d %d ",&num1,&num2);
    int result=pro(num1,num2);
    if (result== -1)
    {
        printf("Error: Enter the positive number");


    }
    else
    {
        printf("product: %d ",pro (num1,num2));

    }
    return 0;


}

