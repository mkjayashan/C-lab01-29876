#include<stdio.h>
int main()
{
    int num[10],i,sum=0,max,min;
    for(i=0;i<10;i++)
    {
        printf("Enter %d value= ",i+1);
        scanf("%d",&num[i]);
        sum+=num[i];

    }
    max=num[0];
    min=num[0];
    for(i=0;i<10;i++)
    {


    if(max<num[i])
        max=num[i];
    if(min>num[i])
        min=num[i];
    }
    printf("\nmaximum value is %d\n",max);
        printf("\nminimum value is %d\n",min);
            printf("average value is %.2f\n",(float)sum/10);
    printf("\Reverse order value is");


}
