//Given a Square Matirx 4x4, Last column and Row of matrix Stores Sum of All Elements in the Row/Column
#include<stdio.h>
int main()
{
    int a[4][4]={{1,4,7},{2,5,8},{3,6,9}};
    for(int i=0;i!=4;i++)
    {
        int sum=0;
        for(int j=0;j!=4;j++)
        {
            if(j==3)
            {
                a[i][j]=sum;
            }
            else
            {
            sum=sum+a[i][j];
            }
        }
    }
    for(int i=0;i!=4;i++)
    {
        int sum=0;
        for(int j=0;j!=4;j++)
        {
            if(j==3)
            {
                a[j][i]=sum;
            }
            else
            {
            sum=sum+a[j][i];
            }
        }
    }
    for(int i=0;i!=4;i++)
    {
        for(int j=0; j!=4; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}