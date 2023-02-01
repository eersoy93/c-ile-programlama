// TANIM:       C ile bir sayının asal olup olmadığını bulma uygulaması
//              kaynak kodu.
// YAZAR:       Erdem Ersoy (eersoy93)
// TELİF HAKKI: (c) 2023 Erdem Ersoy (eersoy93)
// LİSANS:      MIT lisansı (LICENSE dosyasına bakınız.)

#include <locale.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define DEĞİL 0
#define ASAL 1

_Bool asal_mi(int sayi)
{
    for (int i = 2; i <= sqrt(sayi); i++)
    {
        if(sayi % i == 0)
        {
            return DEĞİL;
        }
    }

    return ASAL;
}

int main(void)
{
    setlocale(LC_ALL, "tr_TR.UTF-8");  // -> Linux için.
    //setlocale(LC_ALL, "Turkish");    // -> Windows için.

    int sayi = 0;

    printf("%s", "Asal olup olmadığına bakılacak sayıyı giriniz: ");
    scanf("%d", &sayi);

    if (asal_mi(sayi))
    {
        printf("%s\n", "Sayı asaldır.");
    }
    else
    {
        printf("%s\n", "Sayı asal değildir.");
    }

    return EXIT_SUCCESS;
}
