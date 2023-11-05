/******************************************************************************
Kullanıcının Pozitif Bir Tam Sayı Girmesini Bekleme:
Kullanıcıdan pozitif bir tam sayı girene kadar kullanıcıya sürekli olarak giriş yapması
istenen bir program yazın. (do-while kullanarak)
*******************************************************************************/

#include <stdio.h>

int main() {
    int sayi;
    
    do {
        printf("Lütfen bir pozitif tam sayı giriniz: ");
        scanf("%d", &sayi);
    } while (sayi <= 0);

    printf("Girdiğiniz sayı pozitif ve tam bir sayıdır: %d\n", sayi);

    return 0;
}