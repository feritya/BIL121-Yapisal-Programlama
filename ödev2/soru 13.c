/******************************************************************************
 yapısal programlama 1. hafta ödev soruları;
 soru 13 Kullanıcı tarafından girilen üç sayı arasında en büyük sayıyı bulan
programın kodu.

*******************************************************************************/

#include <stdio.h>

int main(){
    int sayi_1,sayi_2,sayi_3;
    printf("üç tane sayı boşluk bırakın ve ya girdiğiniz her sayıyı girdikten sonra entera basınız ");
    scanf("%d",&sayi_1);
    scanf("%d",&sayi_2);
    scanf("%d",&sayi_3);

    if (sayi_1>sayi_2 && sayi_1>sayi_3){
        printf("en büyük sayi %d",sayi_1);
    }
    else if (sayi_2>sayi_1 && sayi_2>sayi_3){
        printf("en büyük sayi %d",sayi_2);
    }
    else{
        printf("en büyük sayi %d",sayi_3);
    }
    return 0;
}