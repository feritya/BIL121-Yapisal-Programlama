/******************************************************************************
 yapısal programlama 1. hafta ödev soruları;
 soru 12  Kullanıcı tarafından girilen bir sayının çift mi yoksa tek mi
olduğunu kontrol eden program kodu

*******************************************************************************/

#include <stdio.h>

int main(){
    int cift_mi;
    printf("bir sayi giriniz ");
    scanf("%d",&cift_mi);

    if (cift_mi%2==0){
        printf("girdiğiniz sayi çifttir");
    }
    else{
        printf("girdiğiniz sayi tektir");
    }

    return 0;
}