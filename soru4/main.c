#include <stdio.h>

struct ogrenci {
    char ad[20];
    char soyad[20];
    int numara;
    char adres[50];
};

int main() {
    struct ogrenci ogrenciler[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Ogrenci #%d bilgilerini girin:\n", i + 1);
        printf("Ad: ");
        scanf("%s", ogrenciler[i].ad);
        printf("Soyad: ");
        scanf("%s", ogrenciler[i].soyad);
        printf("Numara: ");
        scanf("%d", &ogrenciler[i].numara);
        printf("Adres: ");
        scanf("%s", ogrenciler[i].adres);
    }

    printf("\nOgrenci bilgileri:\n");
    for (i = 0; i < 5; i++) {
        printf("Ogrenci #%d:\n", i + 1);
        printf("Ad: %s\n", ogrenciler[i].ad);
        printf("Soyad: %s\n", ogrenciler[i].soyad);
        printf("Numara: %d\n", ogrenciler[i].numara);
        printf("Adres: %s\n", ogrenciler[i].adres);
    }

    return 0;
}

