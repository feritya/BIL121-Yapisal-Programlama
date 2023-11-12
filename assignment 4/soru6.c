/******************************************************************************
6 Kullanıcıdan alınan vize ve final notlarını hesaplayıp 50 den büyükse şartlı geçtiniz 60
dan büyükse geçtiniz yazdıran programı yazınız.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int final,vize;
    
    printf("LUTFEN VİZE NOTUNUZU GİRİNİZ : ");
    scanf("%d",&vize);
    printf("LUTFEN FİNAL NOTUNUZU GİRİNİZ : ");
    scanf("%d",&final);
    int note=(final*0.6)+(vize*0.4);
    if (note<50 && note>0){
        printf("not ortalamanız: %d kaldınız ",note);
    
    }
    else if (note<60 && note>50){
        printf("not ortalamanız: %d şartlı geçtiniz",note);
        
    }
    else if (note<100 && note>60){
        printf("not ortalamnız : %d geçtiniz ",note);
        
    }
    else {
        printf("lütfen geçerli değerler girin ");
    }
    return 0;
}
