#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        int sayi,sayac;
        unsigned long long int sonuc1 = 1ULL , sonuc2 =0ULL;
        printf("\nLutfen faktoriyeli alinacak sayiyi giriniz: ");
        scanf("%d",&sayi);
        for(sayac=1;sayac<=sayi;sayac++)
        {
            if(sayac < 66)
            {
                sonuc1 *=(unsigned long long int) sayac;
            }
            else
            {
                sonuc2 += (sonuc1 *=(unsigned long long int) sayac - 9223372036854775808);
            }
        }
        printf("%llu",sonuc1+sonuc2);

    }
}