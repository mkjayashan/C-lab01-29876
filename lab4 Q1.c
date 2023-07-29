#include<stdio.h>
int main()
{
    //...declaring variables
    float r,c,v,pi=3.1459;
    int t;
    printf("enter the radius of the circle");
    scanf("%f",&r);
    //...display the menu
    printf("select which of these you want to know \n 1.The circumferance of the circle  \n 2.The area of the circle \n 3.The volume of the circle  \n");
    scanf(" %d",&t);
    if(t==1)
        printf("The circumferance of the circle is %.2f",2.0*pi*r);
    else if(t==2)
        printf("The area of the circle is %.2f",pi*r*r);
    else if(t==3)
        printf("The volume of the circle is %.2f",pi*r*r*r);
    else
        printf("invalid option");


}

