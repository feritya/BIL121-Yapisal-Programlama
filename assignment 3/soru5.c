/******************************************************************************
5. Ters Piramit Deseni Oluşturma:
Kullanıcının girdiği bir pozitif tam sayıya göre ters bir piramit deseni oluşturan bir
program.
*******************************************************************************/

#include <stdio.h>

int main()
{
int a;
printf("bir sayiyi giriniz: ");
scanf("%d",&a);
for (int i=0;i<=a;i++){
    printf("\n");
    
for(int b=0;b<i;b++){
        printf(" ");
}

for(int j=0;j<a-2*i;j++){
        printf("*");

}


}

return 0;
}
