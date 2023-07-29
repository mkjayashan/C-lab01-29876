#include<stdio.h>
int main()
{
    int arr1[3][3]={2,3,4,1,2,3,5,6,2};
    int arr2[3][3]={2,3,4,1,2,3,2,3,2};
    int result[3][3],c,r;
    for(r=0;r<3;r++)
    {


    for(c=0;c<3;c++)
    {
      printf("%d ",arr1[r][c]);

    }
    printf("\t");

    for(c=0;c<3;c++)
    {
        printf("%d ",arr2[r][c]);
    }
     printf("\t");

     for(c=0;c<3;c++)
     {
         result[r][c] = arr1[r][c]+arr2[r][c];
         printf("%d", result[r][c]);

     }
     printf("\n");
    }
}
