// TANIM:       C ile birden çok kaynak kod uygulaması kaynak kodu.
// YAZAR:       Erdem Ersoy (eersoy93)
// TELİF HAKKI: (c) 2023 Erdem Ersoy (eersoy93)
// LİSANS:      MIT lisansı (LICENSE dosyasına bakınız.)

// ÖNEMLİ: "gcc main.c math_bizim.c -o main" komutuyla derleyiniz.

#include "math_bizim.h"
#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    setlocale(LC_ALL, "tr_TR.UTF-8");  // -> Linux için.
    //setlocale(LC_ALL, "Turkish");    // -> Windows için.

    int x = 3;
    printf("%s %d\n", "Sayının karesi:", karesi(x));
    printf("%s %d\n", "Sayının küpü:", kupu(x));

    return EXIT_SUCCESS;
}
