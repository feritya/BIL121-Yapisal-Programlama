/******************************************************************************

Örnek -1 ) Bir dinamik fibonacci dizisi oluşturun. Dizinin eleman sayısını kullanıcıdan alın.
Dizinin son elemanını pointer yardımıyla gösteriniz.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

// Fibonacci dizisini oluşturan fonksiyon
int* fibonacci(int n) {
    
    int* fibArray = (int*)malloc(n * sizeof(int));




    if (fibArray == NULL) {
        printf("Hafıza tahsisi basarisiz.\n");
        exit(EXIT_FAILURE);
    }



    fibArray[0] = 0;
    fibArray[1] = 1;
    for (int i = 2; i < n; ++i) {
        fibArray[i] = fibArray[i - 1] + fibArray[i - 2];
    }
    return fibArray;
}

int main() {
    int n;

    printf("Fibonacci dizisinin eleman sayisini girin: ");
    scanf("%d", &n);
    int* fibonacciArray = fibonacci(n);

    int* lastElement = &fibonacciArray[n - 1];

    
    printf("Dizinin son elemani: %d\n", *lastElement);
    free(fibonacciArray);

    return 0;
}
