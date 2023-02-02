// TANIM:       C ile bir yapı (struct) örneği uygulaması kaynak kodu.
// YAZAR:       Erdem Ersoy (eersoy93)
// TELİF HAKKI: (c) 2023 Erdem Ersoy (eersoy93)
// LİSANS:      MIT lisansı (LICENSE dosyasına bakınız.)

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

struct Kitap
{
    int kitap_no;
    int kategori_no;
    char kitap_adi[30];
    char yazar_adi[30];
};

int main(void)
{
    setlocale(LC_ALL, "tr_TR.UTF-8");  // -> Linux için.
    //setlocale(LC_ALL, "Turkish");    // -> Windows için.

    struct Kitap kitap = { 1, 1, "Hedef Türkiye", "Oktay Sinanoğlu" };
    struct Kitap kitap2 = { 2, 1, "Bye Bye Türkçe", "Oktay Sinanoğlu" };

    printf("%s %d\n", "Kitap numarası:", kitap.kitap_no);
    printf("%s %d\n", "Kategori numarası:", kitap.kategori_no);
    printf("%s %s\n", "Kitap adı:", kitap.kitap_adi);
    printf("%s %s\n", "Kitap yazarı:", kitap.yazar_adi);

    struct Kitap * kitap_ptr = &kitap2;
    printf("\n");

    printf("%s %d\n", "Kitap numarası:", kitap_ptr->kitap_no);
    printf("%s %d\n", "Kategori numarası:", kitap_ptr->kategori_no);
    printf("%s %s\n", "Kitap adı:", kitap_ptr->kitap_adi);
    printf("%s %s\n", "Kitap yazarı:", kitap_ptr->yazar_adi);

    return EXIT_SUCCESS;
}
