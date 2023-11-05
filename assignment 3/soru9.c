/******************************************************************************
Kullanıcının bir menüden seçim yapmasını ve seçimine göre kare alma/karekök
hesaplama işlemlerini yapan programı yazın.
*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main() {
    int sayi,kok,kare;
    
    printf("MENU\n1- Kare Alma \n2- Kök Alma\n");
    scanf("%d",&sayi);
    if (sayi==1){
    printf("lütfen karesi alınacak sayiyi girin: ");
    scanf("%d",&kare);
    printf("girdiginiz sayinin karesi: %d ",kare*kare);
    
    }
    else if (sayi==2){
    printf("lütfen kökü alınacak sayiyi girin ");
    scanf("%d",&kok);
    printf("girdiginiz sayinin koku: %.2f ", sqrt(kok));
    }
    else{
        printf("geçerli bir sayi giriniz");
    }
    return 0;
}