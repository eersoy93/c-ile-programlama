// TANIM:       C ile bir sabit büyüklükteki değişkenler uygulaması kaynak kodu.
// YAZAR:       Erdem Ersoy (eersoy93)
// TELİF HAKKI: (c) 2023 Erdem Ersoy (eersoy93)
// LİSANS:      MIT lisansı (LICENSE dosyasına bakınız.)

#include <locale.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "tr_TR.UTF-8");  // -> Linux için.
    //setlocale(LC_ALL, "Turkish");    // -> Windows için.

    printf("int türü değişkenin kapladığı bayt alanı: %lu\n", sizeof(int));
    printf("\n");
    printf("int8_t değişkeninin kapladığı bayt alanı: %lu\n", sizeof(int8_t));
    printf("int16_t değişkeninin kapladığı bayt alanı: %lu\n", sizeof(int16_t));
    printf("int32_t değişkeninin kapladığı bayt alanı: %lu\n", sizeof(int32_t));
    printf("int64_t değişkeninin kapladığı bayt alanı: %lu\n", sizeof(int64_t));

    return EXIT_SUCCESS;
}
