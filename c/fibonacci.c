#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int fibonacci(int x,int y);

int size=10;

int main(void)
{
    
    
    float e;
    e = fibonacci(1,1);
    printf("Altin oran: %f",e);
}

int fibonacci(int x,int y)
{
    static int count=0;
    int z;
    printf("x: %d y: %d\n",x,y);
    if(count<size) 
    {
        
        z = x + y;
        printf("z: %d\n",z);
        x = y;
        count++;
        fibonacci(x,z);
    }
    else 
    {
        return y/x;
    }
    return y/x;
}