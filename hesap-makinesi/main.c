// TANIM:       C ile bir hesap makinesi uygulaması kaynak kodu.
// YAZAR:       Erdem Ersoy (eersoy93)
// TELİF HAKKI: (c) 2023 Erdem Ersoy (eersoy93)
// LİSANS:      MIT lisansı (LICENSE dosyasına bakınız.)

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "tr_TR.UTF-8");  // -> Linux için.
    //setlocale(LC_ALL, "Turkish");    // -> Windows için.

    char yildizlar[11] = "**********";
    printf("%s %s %s\n", yildizlar, "Hesap Makinesi", yildizlar);

    printf("\n");

    printf("%s", "Lütfen işlem yapılacak ilk sayıyı giriniz: ");
    int sayi1 = 0;
    scanf(" %d", &sayi1);

    printf("%s", "Lütfen işlem yapılacak ikinci sayıyı giriniz: ");
    int sayi2 = 0;
    scanf(" %d", &sayi2);

    printf("\n");
    printf("%s\n", "+) Toplama");
    printf("%s\n", "-) Çarpma");
    printf("%s\n", "*) Çarpma");
    printf("%s\n", "/) Bölme");
    printf("%s\n", "%) Mod Alma");
    printf("\n");

    printf("%s\n%s", "Lütfen menüden baştaki karaktere göre", "bir işlem seçiniz: ");
    char islem = '\0';
    scanf(" %c", &islem);

    switch(islem)
    {
        case '+':
            printf("%s %d\n", "Girilen iki sayının toplamı:", sayi1 + sayi2);
            break;
        case '-':
            printf("%s %d\n", "Girilen iki sayının birincisinin ikincisinden farkı:", sayi1 - sayi2);
            break;
        case '*':
            printf("%s %d\n", "Girilen iki sayının çarpımı:", sayi1 * sayi2);
            break;
        case '/':
            printf("%s %d\n", "Girilen iki sayının birincisinin ikincisine bölümü:", sayi1 / sayi2);
            break;
        case '%':
            printf("%s %d\n", "Girilen iki sayının birincisinin ikincisine bölümünün kalanı:", sayi1 % sayi2);
            break;
        default:
            printf("%s\n", "Geçersiz işlem girildi!");
            return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
