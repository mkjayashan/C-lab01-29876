#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter numbers");
    scanf("%d %d",&n1,&n2);
    if(n1%n2==0)
        printf("%d is multiple of the %d",n1,n2);
    else
        printf("%d is not multiple of the %d",n1,n2);
}
