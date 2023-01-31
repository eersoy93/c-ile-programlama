// TANIM:       C ile bir matrisin transpozu (devriği) uygulaması
//              kaynak kodu.
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

    printf("Matrisin satır sayısını giriniz: ");
    int i = 0;
    scanf(" %d", &i);

    printf("Matrisin sütun sayısını giriniz: ");
    int j = 0;
    scanf(" %d", &j);


    int A[i][j];

    for (int c1 = 0; c1 < i; c1++)
    {
        for (int c2 = 0; c2 < j; c2++)
        {
            printf("İlk matrisin %d. satırını ve %d. sütunundaki elemanı giriniz: ", c1 + 1, c2 + 1);
            int eleman = 0;
            scanf(" %d", &eleman);
            A[c1][c2] = eleman;
        }
    }

    int B[i][j];

    for (int c1 = 0; c1 < i; c1++)
    {
        for (int c2 = 0; c2 < j; c2++)
        {
            B[c1][c2] = A[c2][c1];
        }
    }

    printf("Sonuç matrisi aşağıdadır:\n");
    for (int c1 = 0; c1 < i; c1++)
    {
        for (int c2 = 0; c2 < j; c2++)
        {
            printf("%d\t", B[c1][c2]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
