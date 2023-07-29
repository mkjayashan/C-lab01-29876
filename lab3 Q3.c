#include<stdio.h>
int main()
{
    //...declaring variables
    int int_value;
    float float_value;
    double double_value;
    char char_value;
    //...input
    printf("Enter the integer value: ");
    scanf("%d",&int_value);
    printf("Enter the float value: ");
    scanf("%f",&float_value);
    printf("Enter the double value: ");
    scanf("%1f",&double_value);
    printf("Enter the char value: ");
    scanf("%c",&char_value);

    //...output
    printf("Integer value is %d \n",int_value);
    printf("float value is %f \n",float_value);
    printf("double value is %f \n",double_value);
    printf("Char value is %c \n",char_value);



}
