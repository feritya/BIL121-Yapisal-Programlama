/******************************************************************************
Çarpım Tablosu Oluşturma (iç içe döngüler ile):
Kullanıcının girdiği bir tam sayının çarpım tablosunu oluşturan bir program yazın.
*******************************************************************************/

#include <stdio.h>

int main() {
    int sayi;

    printf("Bir tam sayi giriniz: ");
    scanf("%d", &sayi);

    if (sayi <= 0) {
        printf("Hatali giris yaptiniz. Pozitif bir tam sayi giriniz.\n");
        return 1;
    }

    printf("Carpim tablosu %d icin:\n", sayi);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", sayi, i, sayi * i);
    }

    return 0;
}
