#include <stdio.h>
#include <stdlib.h>

int check_rotation(int i,int k,int users_array[x][y],int gods_array[2][x*y]);
int test_rotation(int x,int y);

int x,y,total=0;
int main(void)
{
    int i,j;
    printf("Please enter number of lines and columns: ");
    scanf("%d %d",&x,&y);
    static int users_array[x][y];
    static int gods_array[2][x*y];
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            int numbr;
            printf("Please enter the number in: line %d , column %d : ",i+1,j+1);
            scanf("%d",&numbr);
            users_array[i][j] = numbr;
        }
    }
    for(i=0;i<x;i++)
    {
        if(i==0) puts("\n\n---------Users Array---------\n");
        for(j=0;j<y;j++)
        {
            printf("%d ",users_array[i][j]);
        }
        printf("\n");
    }

    check_rotation(0,0,users_array[x][y],gods_array[2][x*y]);

}

int check_rotation(int i,int k,int users_array[x][y],int gods_array[2][x*y])
{
    total=0;
    static int rotation_array[4] = {0,0,0,0},p=0,t=0; // up right down left
    if(k+1<y)
    {
        int a=users_array[i][k],b=users_array[i][k+1];
        if(b>a)
        {
            gods_array[][];
        }
    }

}