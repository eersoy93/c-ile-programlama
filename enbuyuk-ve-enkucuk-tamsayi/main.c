// TANIM:       C ile bir tamsayı en büyük ve en küçük sayılar uygulaması
//              kaynak kodu.
// YAZAR:       Erdem Ersoy (eersoy93)
// TELİF HAKKI: (c) 2023 Erdem Ersoy (eersoy93)
// LİSANS:      MIT lisansı (LICENSE dosyasına bakınız.)

#include <limits.h>
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "tr_TR.UTF-8");  // -> Linux için.
    //setlocale(LC_ALL, "Turkish");    // -> Windows için.

    printf("int türü değişkenin kapladığı bayt alanı: %lu\n", sizeof(int));
    printf("unsigned int türü değişkenin kapladığı bayt alanı: %lu\n", sizeof(unsigned int));
    printf("\n");
    printf("En büyük int sayısı: %d\n", INT_MAX);
    printf("En küçük int sayısı: %d\n", INT_MIN);
    printf("En büyük int sayısı: %u\n", UINT_MAX);
    printf("En küçük int sayısı: %u\n", 0U);

    return EXIT_SUCCESS;
}
