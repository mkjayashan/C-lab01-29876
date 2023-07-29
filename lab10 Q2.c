#include<stdio.h>
int main()
{
    int arr[4][4]={8,17,9,6,5,2,18,27,28,0,4,1,3,10},r,c;
    for(r=0;r<4;r++)
    {
        for(c=0;c<4;c++)
        {
            if(arr[r][c]==5)
            {
                printf("Index of ""5""=[%d][%d]\n",r,c);
            }
        }
    }
}
