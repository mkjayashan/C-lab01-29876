#include<stdio.h>
int main()
{
    int x,y,z;
    int arr[4][4]={8,17,9,6,5,2,11,18,7,27,28,0,4,1,3,10};
    printf("which number you looking for ");
    scanf("%d",&z);
    for(x=0;x<4;x++)
    {
        for(y=0;y<4;y++)
            {
                if(arr[x][y]==z)
                {
                    printf("arr[%d][%d]",x,y);
                }
            }

    }


}
