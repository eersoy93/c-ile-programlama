// TANIM:       C ile bir öz yinelemeli faktöriyel hesabı uygulaması
//              kaynak kodu.
// YAZAR:       Erdem Ersoy (eersoy93)
// TELİF HAKKI: (c) 2023 Erdem Ersoy (eersoy93)
// LİSANS:      MIT lisansı (LICENSE dosyasına bakınız.)

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int faktoriyel(int x)
{
    if (x < 0)
    {
        return -1; // Yani hata olarak döndürür.
    }
    else if (x == 0 || x == 1)
    {
        return 1;  // 0! = 1, 1! = 1
    }
    else
    {
        return (x * faktoriyel(x - 1));
    }
}

int main(void)
{
    setlocale(LC_ALL, "tr_TR.UTF-8");  // -> Linux için.
    //setlocale(LC_ALL, "Turkish");    // -> Windows için.

    printf("Faktöriyeli alınacak sayıyı giriniz: ");
    int x = 0;
    scanf("%d", &x);

    int x_faktoriyeli = faktoriyel(x);
    if (x == -1)
    {
        printf("Girilen sayı faktöriyel hesabı için geçersizdir!");
    }
    else if (x >= 0)
    {
        printf("Girilen sayının faktöriyeli: %d\n", x_faktoriyeli);
    }
    else
    {
        printf("Bu, nasıl öyle oldu??? :)");
    }

    return EXIT_SUCCESS;
}
