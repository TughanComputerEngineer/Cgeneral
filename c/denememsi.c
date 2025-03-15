#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define SIZE 8

int havuzhesap(int height[], int x);

int main(void)
{
    int height[SIZE];
    int i,s;
    for(i=0;i<SIZE;i++)
    {
        printf("\nLutfen %d adet sayi giriniz: ",SIZE);
        scanf("%d",&s);
        height[i] = s;
    }
    for(i=0;i<SIZE;i++)
    {
        printf("%d  ",height[i]);
    }
    havuzhesap(height,SIZE);
}

int havuzhesap(int height[], int x)
{
    //OPTİMİZASYON

    // ÖNEMLİ1: 2 BOYUTLU BİR MATRİS OLUŞTUR SATIR SAYISI 2 SÜTUN SAYISI N OLUCAK ŞEKİLDE.
    // ÖNEMLİ2: MATRİSİ DOLDURURKEN ÇUBUKLARI BÜYÜKTEN KÜÇÜĞE DOĞRU SIRALAYARAK VE EĞER BİR ÇUBUK MATRİSİN 1. İNDEXİNDEKİ SATIRA İNDEX NUMARASINI YAZARAK DOLDUR. 
    // ÖNEMLİ3: BÜYÜKLÜK KONTROLÜ YAPICAK BİR FONKSİYONU BÜTÜN YAZ VE O FONKSİYON BÜYÜKLÜK KONTOLÜNÜ YAPARKEN ÖRNEĞİN 2 TANE 8 VARSA VE BİRİNCİ 8 İ ALDIKTAN SONRA İNDEXİNİ BİR DEĞİŞKENDE TUT. VE İNDEXİ O DEĞİŞKENE EŞİT OLAN ELEMANA BAKMA + EN SON BAKILAN ELEMAN >= YENİ ELEMAN OLUCAK ŞEKİLDE KONTROLÜ YAP ==== İLK KONTROL EN SON BAKILAN ELEMAN >= YENİ ELEMAN SONRAKİ KONTROL SON ELEMANIN İNDEXİNİ BİR DEĞİŞKENDE TUT. VE İNDEXİ O DEĞİŞKENE EŞİT OLAN ELEMANA BAKMA. VE VE VE İNDEXİ TUTAN DEĞİŞKENİ İLK BAŞTA 0 A EŞİTLE. 
    // ÖNEMLİ4: OLUŞTURULAN MATRİS İÇİN FORLARI ÇALIŞTIR.

    // ÖNEMLİ6: FOR U 5 KERE ÇALIŞTIR VE ÇIKAN EN BÜYÜK HACMİ HAVUZ MAX A EŞİTLE

    // iç içe 2 tane for döngüsü kullan ilk döngü j= size-1 dan j>=0 a kadar j-- şeklinde çalışsın. 
    // ikinci döngü i=0 dan i<size a kadar i++ şeklinde çalışsın. 
    // bir adet havuzmax değişkeni tanımla 
    // bir adet sonuc değişkeni tanımla 
    // if sonuc > havuzmax 
    // havuzmax = sonuc yap ve döngüyü devam ettir. 
    // ÖNEMLİ5: EĞERKİ ÇUBUĞUN BOYU X HAVUZUN ALABİLECEĞİ EN BÜYÜK BOY = POTANSİYEL HAVUZ < HAVUZMAX FORU O ÇUBUK İÇİN ÇALIŞTIRMA
    // 1.0. kural: her çubuk için olabilicek en büyük boydaki havuzun hacmini al
    // 1.1. kural: sırayla en büyük çubuk ikililerini dene. VE mümkün olan en uzun boydaki havuzu almaya çalış.

    // ÖNEMLİ7: HAVUZ POTANSİYELİ > HAVUZ MAX OLAN ÇUBUKLAR İÇİN YENİ BİR MATRİS OLUŞTURURKEN İLK ÖNCE ÇALIŞTIRILAN 5 FOR DÖNGÜSÜNDE KULLANILMAMIŞ BİR ÇUCUK VARSA O ÇUBUĞU VE 5 FORDA KULLANILAN ÇUBUKLARI MATRİSE AL VE FORU YENİ MATRİSE UYGUN OLACAK BİÇİMDE ÇALIŞTIR. EĞER İLK 5 FOR DÖNGÜSÜNDE KULLANILMAMIŞ BİR ÇUBUK YOKSA FOR U ÇALIŞTIRMA.

    // iç içe 2 tane for döngüsü kullan ilk döngü j= size-1 dan j>=0 a kadar j-- şeklinde çalışsın. 
    // ikinci döngü i=0 dan i<size a kadar i++ şeklinde çalışsın. 
    // bir adet havuzmax değişkeni tanımla 
    // bir adet sonuc değişkeni tanımla 
    // if sonuc > havuzmax 
    // havuzmax = sonuc yap ve döngüyü devam ettir.

    int matris[SIZE][2];
    int i,j,p=-1,s=0;
    for(i=0;i<SIZE;i++)
    {
        for(j=0;j<SIZE;j++)
        {
            if(s<=height[j]) 
            {
                if(p!=j) 
                {
                    s = height[j]; 
                    p = j;
                }
            }
        }
        matris[i][0] = s;
        matris[i][1]= p;
    }
    for(i=0;i<SIZE;i++)
    {
        printf("\n%d %d \n",matris[i][0],matris[i][1]);
    }
}