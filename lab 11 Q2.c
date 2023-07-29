#include<stdio.h>
void sum_diff(int a, int b);
{
    printf("Sum is %d ", a+b);
    printf("Difference is %d ", a-b);

}
int main()
{
    int num1, num2;
    printf("Enter the two numbers");
    scanf("%d %d", &num1, &num2);
    sum_diff(num1,num2);

}
