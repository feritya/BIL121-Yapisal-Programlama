/******************************************************************************

tahmin oyunu 
*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int min = 0;     
    int max = 100;   
    int range = max - min + 1;  

    int randomSayi = rand() % range + min; 
    
    int tahmin,tahmin_sayisi=5;
    while(1){
    printf ("\nlütfen tahmininizi giriniz:\n \t 1 - 100\n kalan tahmin hakkınız : %d",tahmin_sayisi);
    scanf("%d",&tahmin);
    if(tahmin_sayisi==0){
        printf("tahmin hakkınnız bitti ");
        break;
    }
        if (tahmin==randomSayi){
            printf("tebrikler doğru tahmin");
            break;
        }
        else if (tahmin<randomSayi){
             printf("tahminizi büyütün");
        }
        else if (tahmin>randomSayi){
            printf("tahminizi küçültün ");
        }
        
    tahmin_sayisi=tahmin_sayisi-1;
        }
    return 0;
}
