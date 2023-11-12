/******************************************************************************
8 Ev çizdiren program tasarlanmak isteniyor. Bu programda catiCiz(void) ve katCiz(void)
adında iki fonksiyon bulunuyor. Main metodundan bu fonksiyonlar belirli sayıda
çalıştırılarak. 3 katlı bir ev çizdiriliyor. Bu programı yazınız.
*******************************************************************************/
#include <stdio.h>

void katCiz() {
    printf("|                                                          |\n");
    printf("|                                                          |\n");
    printf("|              ____              ____                  |\n");
    printf("|              |___|              |___|                  |\n");
    printf("|                                                           |\n");
    printf("|_______________________________________|\n");
}

void catiCiz() {
    printf("                           __\n");
    printf("                     /           \\\n");
    printf("                 /                    \\\n");
    printf("             /                              \\\n");
    printf("         /               ___                     \\\n");
    printf("    /                   |___|                          \\\n");
    printf("/_______________________________________\\\n");

}

int main() {
    

    catiCiz();
    katCiz();
    katCiz();
    return 0;
}