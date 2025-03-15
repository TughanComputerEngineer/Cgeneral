/* 

    atoi fonksiyonu, bir string parametresi alır. Bu string, sayısal karakterler (0-9) ve isteğe bağlı olarak '-' (eksi) karakterini içerebilir.
    Fonksiyon, string'in ilk karakterinden başlayarak her bir karakteri okur.
    Her karakter için, isdigit fonksiyonu kullanılarak karakterin sayısal bir karakter olup olmadığı kontrol edilir.
    Eğer karakter sayısal bir karakterse, atoi fonksiyonu karakterin ASCII değerini alır ve bu değeri ondalık sayı sistemindeki karşılığı olan değere dönüştürür.
    Dönüştürülen değer, bir tamsayı değişkeninde toplanır.
    Fonksiyon, sayısal olmayan bir karaktere rastladığında veya string sonuna gelindiğinde çalışmayı durdurur ve toplanan tamsayı değerini geri döner.



    atoi fonksiyonu, her bir sayısal karakterin ASCII değerini alır ve bu değeri ondalık sayı sistemindeki karşılığı olan değere dönüştürür.
    Dönüştürme işlemi, her sayısal karakterin ASCII değerinden 48 çıkarılarak yapılır. Örneğin, '5' karakterinin ASCII değeri 53'tür. 48 çıkarıldığında 5 değeri elde edilir ve bu değer ondalık sayı sisteminde 5'e karşılık gelir.
    Dönüştürülen değerler, bir tamsayı değişkeninde toplanır.
    Toplanan değer, atoi fonksiyonunun geri dönüş değeri olarak döndürülür.



    "123" stringinin ASCII değerleri sırasıyla 49, 50 ve 51'dir.
    atoi fonksiyonu ilk karakter olan '1'i 49'dan 48 çıkararak 1'e dönüştürür.
    İkinci karakter olan '2'yi 50'den 48 çıkararak 2'ye dönüştürür.
    Üçüncü karakter olan '3'ü 51'den 48 çıkararak 3'e dönüştürür.
    Dönüştürülen değerler (1, 2, 3) toplanır ve sonuç 123 olur.
    atoi fonksiyonu 123 değerini geri döndürür.

*/

char a[5];
int AscToİnt(char a)
{
    
}














/*

    itoa fonksiyonu, bir integer parametresi alır. Bu integer değeri, ondalık, sekizlik veya onaltılık taban sisteminde bir sayıyı temsil edebilir.
    Fonksiyon ayrıca, dönüştürülmüş stringin yazılacağı bellek konumunu ve dönüştürme işleminde kullanılacak tabanı da parametre olarak alır.


    itoa fonksiyonu, integer değerini belirtilen taban sistemine göre ASCII karakterlerine dönüştürür.
    Dönüştürme işlemi, integer değeri tabana bölünerek ve kalanlar kullanılarak gerçekleştirilir.
    Her bir kalan değeri, ASCII tablosundaki karşılık gelen karaktere dönüştürülür.
    Dönüştürülen karakterler, belirtilen bellek konumuna yazılır.
    Dönüştürülmüş stringin uzunluğu da hesaplanır ve geri döndürülür.


    Fonksiyon, integer değerini belirtilen taban sistemine göre ASCII karakterlerine dönüştürür.
    Dönüştürme işlemi, integer değeri tabana bölünerek ve kalanlar kullanılarak gerçekleştirilir.
    Her bir kalan değeri, ASCII tablosundaki karşılık gelen karaktere dönüştürülür.
    Dönüştürülen karakterler, belirtilen bellek konumuna yazılır.
    Dönüştürülmüş stringin uzunluğu da hesaplanır ve geri döndürülür.

*/

int main(void)
{

}