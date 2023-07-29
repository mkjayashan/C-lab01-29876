#include<stdio.h>
int main()
{   int m;
    printf("Enter the month number");
    scanf("%d",&m);
    switch(m)
    {  case 1:
        case 3:
        case 5:
        case 7:
        case 9:
        case 11:
            printf("this month has 31 days");break;
        case 2:
            printf("this month has 28 days");break;
        case 4:
        case 6:
        case 8:
        case 10:
        case 12:
            printf("this month has 30 days");break;
            default : printf("invalid month number");
    }

