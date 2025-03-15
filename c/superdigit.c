#include <stdio.h>
#include <stdlib.h>

void superdigit(void);
double superdigit_single(int x);
void superdigit_multi(int x,int y);

int total=0;

int main()
{
    superdigit();
}

void superdigit(void)
{
    while(1)
    {    
        total=0;
        printf("\n\nPlease enter the way you use this function. \nFor first way enter s (single), For second way enter m (multi)(x for exit): ");
        char type;
        scanf("%s",&type);
        if(type=='s')
        {
            int x,result;
            printf("\nPlease enter the number: ");
            scanf("%d",&x);
            result = superdigit_single(x);
            printf("\nSuperdigit of the number is %d",result);
        }
        else if(type=='m')
        {
            printf("\nPlease enter the first number and second number with white space between them: ");
            int x,y;
            scanf("%d %d",&x,&y);
            superdigit_multi(x,y);
        }
        else if(type=='x')
        {
            printf("\nProgram stopped.");
            break;
        }
        else
        {
            printf("\nIncorrect entry. Please enter again");
            superdigit();
        }
    }
}

double superdigit_single(int x)
{
    if(x>=1)
    {
        {total += x%10;}
        x /= 10;
        superdigit_single(x);
    }
    else
    {
        if(total>=10)
        {
            int k;
            k = total;
            total=0;
            superdigit_single(k);
        }
        else
        {
            return total;
        }
        return total;
    }
    return total;
}

void superdigit_multi(int x,int y)
{
    int result;
    result = y*superdigit_single(x);
    if(result>10)
    {
        result = superdigit_single(result);
        printf("\nSuperdigit of the number is %d",result);
    }
    else
    {
        printf("\nSuperdigit of the number is %d",result);
    }
}
