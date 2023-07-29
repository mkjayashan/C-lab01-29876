#include<stdio.h>
int main()
{
    int size;
    printf("enter the size of the array");
    scanf("%d",&size);
    int arr1[size],arr2[size],vectorsum[size];
    printf("enter the value for arr1:\n");
    for(int i=0;i<size;i++)
    {
        printf("enter value %d:",i+1);
        scanf("%d",&arr1[i]);
    }
    printf("\tEnter values for arr2:\n");
    for(int i=0;i<size;i++)
    {
        printf("enter value %d:",i+1);
        scanf("%d",&arr2[i]);
    }
}
