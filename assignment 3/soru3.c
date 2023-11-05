/******************************************************************************
3. Armstrong Sayıları Bulma:
Armstrong sayıları, rakamlarının küplerinin toplamı kendilerine eşit olan sayılardır.
Örneğin, 153 bir Armstrong sayısıdır çünkü 1^3 + 5^3 + 3^3 = 153 eşittir.

*******************************************************************************/

#include <stdio.h>

int main()
{
int armstrong,armstrong_kontrol,kontrol=0;
printf("armstrongluğunu kontrol edeceğiniz sayiyi giriniz: ");
scanf("%d",&armstrong);
armstrong_kontrol=armstrong;
while (1){
if (armstrong<10){
kontrol += (armstrong%10)*(armstrong%10)*(armstrong%10);
armstrong=armstrong/10;
    break;
}
kontrol += (armstrong%10)*(armstrong%10)*(armstrong%10);
armstrong=armstrong/10;

}
printf("ilk girdiginiz sayi : %d\narmstrong işlemi yapıldığında cıkan sonuc : %d ",armstrong_kontrol,kontrol);
if (armstrong_kontrol==kontrol){
    printf("bu sayi armstrong sayidir");
}
else{
    printf("bu sayi armstrong sayi degildir");
}
return 0;
}
