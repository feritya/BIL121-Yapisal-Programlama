#include <stdio.h>

int main() {
    int bakiye = 1000;
    int secim;

    while (1) {
        printf("ISLEMLER\n1- Para Cek\n2- Para Yatir\n3- Bakiye Sorgula\n4- Cikis\n");
        scanf("%d", &secim);

        if (secim == 4) {
            break;
        }

        switch (secim) {
            case 1:
                printf("1. PARA CEKME\nCekmek istediginiz miktar: ");
                int cek;
                scanf("%d", &cek);
                if (cek > 0 && cek <= bakiye) {
                    bakiye -= cek;
                    printf("Cekilen miktar: %d\n", cek);
                } else {
                    printf("Hatali giris veya bakiye yetersiz.\n");
                }
                break;

            case 2:
                printf("2. PARA YATIRMA\nYatirmak istediginiz miktar: ");
                int yatir;
                scanf("%d", &yatir);
                if (yatir > 0) {
                    bakiye += yatir;
                    printf("Yatirilan miktar: %d\n", yatir);
                } else {
                    printf("Hatali giris. Lutfen pozitif bir miktar girin.\n");
                }
                break;

            case 3:
                printf("BAKIYE SORGULA\nBAKIYENIZ: %d\n", bakiye);
                break;

            default:
                printf("Gecersiz secim. Lutfen 1-4 arasinda bir sayi giriniz.\n");
                break;
        }
    }

    printf("Cikis yapildi.\n");

    return 0;
}
