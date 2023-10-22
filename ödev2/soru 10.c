/******************************************************************************
 yapısal programlama 1. hafta ödev soruları;
 soru 10 Geçici değişken kullanarak 1. sayı ile 2. sayının yerini değiştiren C
kodu yazınız

*******************************************************************************/

#include <stdio.h>

int main (){
    int sayi_1,sayi_2,gecici;
    printf("birinci sayiyi giriniz ");
    scanf("%d",&sayi_1);
    printf("ikinci sayiyi giriniz ");
    scanf("%d",&sayi_2);
    gecici=sayi_1;
    sayi_1=sayi_2;
    sayi_2=gecici;
    printf("değişmiş hali ile sayi 1: %d  ve sayi iki : %d olarak güncellenmiştir",sayi_1,sayi_2);


return 0;
}