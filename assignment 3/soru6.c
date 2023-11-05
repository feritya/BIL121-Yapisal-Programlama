
/******************************************************************************
6. Kare ve Dikdörtgen Oluşturma:
Kullanıcının girdiği satır ve sütun sayısına göre kare ve dikdörtgen oluşturan bir
program.
*******************************************************************************/

#include <stdio.h>

int main()
{
int a,b;
printf("yükseklik giriniz: ");
scanf("%d",&a);
printf("taban olcusu giriniz: ");
scanf("%d",&b);

for (int i=0;i<a;i++){
    printf("\n");
    
for(int j=0;j<b;j++){
        printf("* ");
    }
}

return 0;
}
