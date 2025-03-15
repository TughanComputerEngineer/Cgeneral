#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        int sayi,sayi1=1,sayac;
        unsigned long long int sonuc=1ULL;
        printf("\nLutfen faktoriyeli alinacak sayiyi giriniz: ");
        scanf("%d",&sayi);
        for(sayac=sayi;sayac>1;sayac--)
        {
            sonuc *=(unsigned long long int) sayac;
        }
        printf("%llu",sonuc);
    }
}