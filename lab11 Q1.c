#include<stdio.h>
void sum_diff()

{
    //...no return type, no parameters
    int num1,num2;
    printf("Enter the two numbers");
    scanf("%d %d",&num1,&num2);
    printf("Sum is %d ",num1+num2);
    printf("Difference is %d ",num1-num2);



}
int main()
{
    sum_diff();
    return 0;
}
