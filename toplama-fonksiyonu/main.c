// TANIM:       C ile bir değişken terimli toplama fonksiyonu uygulaması
//              kaynak kodu.
// YAZAR:       Erdem Ersoy (eersoy93)
// TELİF HAKKI: (c) 2023 Erdem Ersoy (eersoy93)
// LİSANS:      MIT lisansı (LICENSE dosyasına bakınız.)

#include <locale.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int toplama(int terim_sayisi, ...)
{
    va_list argumanlar;
    va_start(argumanlar, terim_sayisi);

    int toplam = 0;
    for (int i = 1; i <= terim_sayisi; i++)
    {
        int arguman = va_arg(argumanlar, int);
        toplam += arguman;
    }

    va_end(argumanlar);
    return toplam;
}

int main(void)
{
    setlocale(LC_ALL, "tr_TR.UTF-8");  // -> Linux için.
    //setlocale(LC_ALL, "Turkish");    // -> Windows için.

    int toplam = toplama(2, 3, 5);
    int toplam2 = toplama(3, 4, -2, 6);
    int toplam3 = toplama(4, -3, 5, 0, 10);
    printf("%d %d %d\n", toplam, toplam2, toplam3);

    return EXIT_SUCCESS;
}
