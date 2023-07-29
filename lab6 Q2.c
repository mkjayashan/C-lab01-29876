#include<stdio.h>
int main()
{
    int no;
    printf("Enter the number");
    scanf("%d",&no);
    switch(no%2)
    {
        case 1 :
            printf("%d is an odd number");break;
        case 0 :
            printf("%d is an even number");
    }
}
