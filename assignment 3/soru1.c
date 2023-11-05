/******************************************************************************
2. Tek Sayıları ve Çift Sayıları Ayırma:
Kullanıcının girdiği sayıları tek ve çift sayılar olarak ayıran bir program.
*******************************************************************************/

#include <stdio.h>

int main()
{
int a,b,sub=1;

printf("lütfen taban sayisini giriniz ");
scanf("%d",&a);
printf("lütfen üs sayisini giriniz ");
scanf("%d",&b);
for (int i=0;i<b;i++){
    sub = sub*a;
}
printf("girdiğiniz işlemin sonucu : %d ",sub);
    return 0;
}
