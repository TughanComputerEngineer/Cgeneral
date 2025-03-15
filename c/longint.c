#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        int sayi,sayi1=1,sayac;
        long long int sonuc=1LL;
        printf("\nLutfen faktoriyeli alinacak sayiyi giriniz: ");
        scanf("%d",&sayi);
        for(sayac=sayi;sayac>1;sayac--)
        {
            sonuc *=(long long int) sayac;
        }
        printf("%lld",sonuc);
    }
}