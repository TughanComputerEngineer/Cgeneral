#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <string.h>

int main(void)
{
    // Function Pointer

    double (*math_func_ptr) (double , double) = &pow;
    printf("%.0lf \n",math_func_ptr(7,3));

    double (*sin_and_cos[2]) (double);
    sin_and_cos[0] = &sin;
    sin_and_cos[1] = &cos;

    printf("%.0lf   %.2lf \n\n",sin_and_cos[0](3.14/2),sin_and_cos[1](3.14/2));

    // String Copy Function With Pointers

    char str1[10] = "Bursa";
    char str2[10] = "Ankara";
    printf("%s \n",str1);
    printf("%s \n\n",str2);
    char *str1ptr;
    char *str2ptr;
    str1ptr = str1;
    str2ptr = str2;
    int i;
    for(i=0;i<10;i++)
    {
        str1ptr[i] = str2ptr[i];
    }
    printf("%s \n",str1);
    printf("%s \n\n",str2);

    // Creating Matris With Pointer Arrays And Malloc

    double *PTR[5];
    int k,j,p;
    srand(time(NULL));
    for(k=0;k<5;k++)
    {
        PTR[k] = (double *) malloc(7*sizeof(double));
        for(j=0;j<7;j++)
        {
            PTR[k][j] = rand()%15;
        }
    }   
    for(k=0;k<5;k++)
    {
        for(j=0;j<7;j++)
        {
            printf("%.0lf ",PTR[k][j]);
        }
        printf("\n");
    }   

    // Struct Syntax

    struct ogrenci
    {
        char name[100];
        int number;
        char class[10];
    } o1,o2;

    char* name_ptr;
    char* class_ptr;
    name_ptr = o1.name;
    class_ptr = o1.class;
    o1.number = 86;
    strcpy(name_ptr,"Chiko");
    strcpy(class_ptr,"9-C");
    printf("Ogrenci adi: %s \nOgrenci Numarasi: %d \nSinifi: %s",o1.name,o1.number,o1.class);
    
    // C de pointerlar 

    char* ptr;
    char a[50];
    ptr = a;
    char b[50] = "Miyav";
    strcpy(a,b);
}   