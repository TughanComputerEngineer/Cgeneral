// C ye başlangıç 
// C fonksiyonel programlama yapılan bir dildir. Nesne tabanlı programlama yapılamamaktadır. 

// C nin kod yapısından bahsetmek gerekirse basitçe yukarıdan aşağıya;

// 1) #include <stdio.h> : C de kullanılıcak fonksiyonların bulunduğu kütüphaneyi programa dahil eder.
// Başında # içeren kodlar programın derlenmesi sırasında compiler a komut verir. 
// #include komudunu gören compiler <stdio.h> kütüphanesini programa derleme esnasında dahil etmiş olur. 
// Kullanılan fonksiyonların bulunduğu kütüphaneler programa dahil edilmezse C bu fonksiyonları tanıyamaz. 
// #define kodunun varlığınıda bilelim, daha sonra konuşacağız.

// 2) İnt main() fonksiyonu : C de yapılması istenen işlemler İnt main() fonksiyonunun içine yazılır.
// İnt main() fonksiyonu program çalışırken yukarıdan aşağıya doğru içine girilen kodları çalıştırır.
// Kodlar İnt main() fonksiyonunun { } süslü parantezleri arasına girilmektedir. 
// Not: İnt main() fonksiyonu ise .exe uzantılı dosya çalıştırılırken bilgisayar tarafından otomatik çalıştırılır. 
// Bu yüzden kodlarımızı İnt main() fonksiyonunun içine yazarız. 

// 3) İnt main() fonksiyonunun sonundaki ' return 0; ' kodu : C de İnt main() fonksiyonuna bir değer döndürerek
// programın sonlandırıldığını haber verir.  
// NOT: İnt main(void) şeklinde bir kullanımda vardır. Bu kullanımda ' return 0; ' kullanmak zorunlu değildir.


// HAYDİ BİRLİKTE C'DEKİ İLK PROGRAMIMIZ YAZALIM: EKRANA HANGİ GÜNDE OLDUĞUMUZU YAZDIRALIM

#include  <stdio.h>  // 1. MADDE 

int main() // 2. MADDE
{
     printf("Bugün günlerden: Cumartesi^^"); // KODUMUZ
     
     return 0; // 3. MADDE
}

// printf(): Ekrana yazdırma fonksiyonudur. " " tırnak içindeki ifade ekrana yazdırılır.
// Not: Fonksiyonların sonunda ' ; ' noktalı virgül kullanılır.
// printf() fonksiyonu alt satıra geçme işlemini yapmaz. Eğer burada ikinci bir printf()
// kullanarak başka bir cümle yazdırsaydık bu cümleler yan yana ve bitişik olurdu. 
// Alt satıra inmek ve bazı bir kaç işlem için kaçış karakterleri (escape sequences) denilen
// bazı özel karakterler kullanılınır. Bu karakterlere örnekler;
// - \n (newline): alt satıra geçer. 
// - \t (horizontal tab): işaretçiyi bir sonraki tab boşluğuna ilerletir. 
// - \a (alert): bip sesi çıkartır.
// - \\ : \ işaretini yazdırır.
// - \" : " işaretini yazdırır.
// Şimdilik bu kadar kaçış karakteri bilmek yeterlidir. 


// KULLANICIDAN İKİ TANE SAYI ALAN VE BU İKİ SAYIYI TOPLAYIP SONUCUNU EKRANA YAZDIRAN PROGRAM

#include <stdio.h>

int main()
{
     // Kullanıcıdan 2 tane sayı alma işlemi için öncelikle 2 tane sayıya ihtiyacımız var. 
     // Daha doğrusu sayıyı içinde tutucak değişkene.
     // Bu değişkenin türü int (tam sayı) , float (ondalıklı sayı) veya double (büyük ondalıklı sayı) olabilir.
     // Biz küçük tam sayılar ile çalışacağımız için int tipinde tanımlayacağız.

     int sayi1; // 1. sayıyı tutacak değişken sayi1 ismiyle programa tanıtıldı.
     int sayi2; // 2. sayıyı tutacak değişken sayi2 ismiyle programa tanıtıldı.
     int sonuc; // Sonucu tutacak değişken sonuc ismiyle programa tanıtıldı

     // Not: Bu sayıları virgül yardımıyla tek satırda tanımlayabiliriz. (Okunabilirlik)

     int sayi1,sayi2,sonuc; // 1. ve 2. sayı ile sonucu tutacak değişkenler sayi1, sayi2 ve sonuc ismiyle programa tanıtıldı.

     // Programa tanıtılan sayılar için ram den yer tahsis edilir. Tahsis edilen yerin boyutu veri tipine göre değişiklik gösterir.
     // int türü 4 byte, float türü 4 byte, double türü 8 byte yer tahsis eder.
     
     // 2 kullanımdan birini tercih etmemiz gerekir. 

     // Kullanıcıdan veri girişi için kullanılan fonksiyon: scanf()
     // scanf() fonksiyonunun kullanımı: scanf("%format",&değişken); şeklindedir. 
     // Not: Format yerine int için %d, float için %f, double için %lf kullanılabilir.
     // Not2: & işareti değişkenin ram de kendine tahsis edilen yerin adresini temsil eder.
     // Bu sayede kullanıcıdan alınan veri ram de değişkeni temsil eden doğru adrese atanır. 
     // & işaretinin unutulması durumunda alınan hata: ' Segmentation fault ' dur.

     printf("Lutfen 1.sayiyi giriniz: ");   // Kullanıcıdan veri almadan önce veri girişi için haber verelim.
     scanf("%d",&sayi1); // Kullanıcıdan girilen değer sayi1 değişkenine atanır. Böylece 1. sayı alınmış olur.

     printf("Lutfen 2.sayiyi giriniz: ");   // Kullanıcıdan veri almadan önce veri girişi için haber verelim.
     scanf("%d",&sayi2); // Kullanıcıdan girilen değer sayi2 değişkenine atanır. Böylece 2. sayı alınmış olur.

     sonuc = sayi1 + sayi2; // Toplama işlemi yapılır.
     printf("Sonuc: %d",sonuc); // Sonuc değişkeni ekrana yazdırılır.

     return 0; // Program sonlandırılır.
}

// KODLARI ÖN PLANDA OLACAK ŞEKİLDE AYNI PROGRAMI YAZALIM

int main()
{
    int sayi1,sayi2,sonuc;

    printf("Lutfen 1.sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("Lutfen 2.sayiyi giriniz: ");
    scanf("%d",&sayi2);
    
    sonuc = sayi1 + sayi2;
    printf("Sonuc: %d",sonuc);

    return 0;
}

