// TANIM:       C ile bir matris çarpımı uygulaması kaynak kodu.
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

    printf("1. matrisin satır sayısını giriniz: ");
    int i = 0;
    scanf(" %d", &i);

    printf("1. matrisin sütun ve 2. matrisin satır sayısını giriniz: ");
    int j = 0;
    scanf(" %d", &j);

    printf("2. matrisin sütun sayısını giriniz: ");
    int k = 0;
    scanf(" %d", &k);


    int A[i][j];
    int B[j][k];

    for (int c1 = 0; c1 < i; c1++)
    {
        for (int c2 = 0; c2 < j; c2++)
        {
            printf("İlk matrisin %d. satırındaki ve %d. sütunundaki elemanı giriniz: ", c1 + 1, c2 + 1);
            int eleman = 0;
            scanf(" %d", &eleman);
            A[c1][c2] = eleman;
        }
    }
    for (int c1 = 0; c1 < j; c1++)
    {
        for (int c2 = 0; c2 < k; c2++)
        {
            printf("İkinci matrisin %d. satırındaki ve %d. sütunundaki elemanı giriniz: ", c1 + 1, c2 + 1);
            int eleman = 0;
            scanf(" %d", &eleman);
            B[c1][c2] = eleman;
        }
    }

    int C[i][k];

    for (int c1 = 0; c1 < i; c1++)
    {
        for (int c2 = 0; c2 < k; c2++)
        {
            C[c1][c2] = 0;
            for (int c3 = 0; c3 < j; c3++)
            {
                C[c1][c2] += A[c1][c3] * B[c3][c2];
            }
        }
    }

    printf("Sonuç matrisi aşağıdadır:\n");
    for (int c1 = 0; c1 < i; c1++)
    {
        for (int c2 = 0; c2 < k; c2++)
        {
            printf("%d\t", C[c1][c2]);
        }
        printf("\n");
    }

    return EXIT_SUCCESS;
}
