#include<stdio.h>
int main()
{
    float r,c,v,pi=3.1459;
    char t;
    printf("enter the radius of the circle");
    scanf("%f",&r);
    printf("select which of these you want to know \n 1.The circumferance of the circle type 'c' \n 2.The area of the circle 'a' \n 3.The volume of the circle type 'v' \n");
    scanf(" %c",&t);
    if(t=='c')
        printf("The circumferance of the circle is %.2f",2.0*pi*r);
    else if(t=='a')
        printf("The area of the circle is %.2f",pi*r*r);
    else if(t=='c')
        printf("The volume of the circle is %.2f",pi*r*r*r);
    else
        printf("invalid option");


}
