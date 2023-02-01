// TANIM:       C ile bir Fibonacci dizisi uygulaması kaynak kodu.
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

    printf("%s", "Kaç terimlik Fibonacci dizisi yazdırılacak: ");
    int terim_sayisi = 0;
    scanf("%d", &terim_sayisi);

    int terim1 = 0;
    int terim2 = 1;
    int terimsonraki = 0;
    for (int i = 1; i <= terim_sayisi; i++)
    {
        printf("%2d) %10d\n", i, terim1);

        terimsonraki = terim2 + terim1;
        terim1 = terim2;
        terim2 = terimsonraki;
    }

    return EXIT_SUCCESS;
}
