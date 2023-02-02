// TANIM:       C ile bir sayının mükemmel olup olmadığını bulma uygulaması
//              kaynak kodu.
// YAZAR:       Erdem Ersoy (eersoy93)
// TELİF HAKKI: (c) 2023 Erdem Ersoy (eersoy93)
// LİSANS:      MIT lisansı (LICENSE dosyasına bakınız.)

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

#define DEGIL    0
#define MUKEMMEL 1

_Bool mukemmel_mi(int sayi)
{
    int toplam = 0;
    for (int i = 1; i <= (sayi / 2); i++)
    {
        if(sayi % i == 0)
        {
            toplam += i;
        }
    }

    if (toplam == sayi)
    {
        return MUKEMMEL;
    }

    return DEGIL;
}

int main(void)
{
    setlocale(LC_ALL, "tr_TR.UTF-8");  // -> Linux için.
    //setlocale(LC_ALL, "Turkish");    // -> Windows için.

    int sayi = 0;

    printf("%s", "Mükemmel olup olmadığına bakılacak sayıyı giriniz: ");
    scanf("%d", &sayi);

    if (mukemmel_mi(sayi))
    {
        printf("%s\n", "Sayı mükemmeldir.");
    }
    else
    {
        printf("%s\n", "Sayı mükemmel değildir.");
    }

    return EXIT_SUCCESS;
}
