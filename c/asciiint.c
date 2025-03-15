#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int sayi = 9865241;
    char yazi[7];
    
    itoa(sayi,yazi,10);
    printf("%s",yazi);

    char yazi2[7] = "169742";
    int sayi2;

    sayi2 = atoi(yazi2);
    printf("\n%d",sayi2);

}