// TANIM:       C ile bir dosya yazma ve dosya okuma uygulaması kaynak kodu.
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

    char dosya_adi[20] = "sayilar.txt";

    FILE * fp;

    fp = fopen(dosya_adi, "w");
    for (int i = 1; i <= 100; i++)
    {
        fprintf(fp, "%d\n", i);
    }
    fclose(fp);

    int yazdirilacak_sayi = 0;
    printf("%s dosyasının içeriği:\n\n", dosya_adi);
    fp = fopen(dosya_adi, "r");
    for (int i = 1; i <= 100; i++)
    {
        fscanf(fp, "%d\n", &yazdirilacak_sayi);
        printf("%d\n", yazdirilacak_sayi);
    }
    fclose(fp);

    return EXIT_SUCCESS;
}
