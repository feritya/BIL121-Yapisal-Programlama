/******************************************************************************
2. Tek Sayıları ve Çift Sayıları Ayırma:
Kullanıcının girdiği sayıları tek ve çift sayılar olarak ayıran bir program.

*******************************************************************************/

#include <stdio.h>

int main()
{
    
int cift[100];
int tek[100];
int cift_index=0,tek_index=0;
int kontrol;

while (1){
    printf("lütfen tek ve çift sayileri giriniz sayileriniz bittiyse -1 giriniz: ");
    scanf("%d",&kontrol);
    if (kontrol==-1){
        break;
    }
    
    if (kontrol%2==0){
        cift[cift_index]=kontrol;
        cift_index++;
    }
    
    if (kontrol%2==1){
        tek[tek_index]=kontrol;
        tek_index++;
    }
    
}
    printf("\nTEK SAYILAR:\n");
    for (int i=0;i<tek_index;i++){
        printf("%d ",tek[i]);
    }
    
    printf("\n\nCIFT SAYILAR:\n");
    for (int i=0;i<cift_index;i++){
        printf("%d ",cift[i]);
    }


return 0;
}