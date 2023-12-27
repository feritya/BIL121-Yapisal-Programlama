/******************************************************************************

Örnek-2)
Rastgele değerlerden oluşan 2 boyutlu dinamik bir dizi oluşturun. Diziyi ekrana yazdırın.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int** createRandomMatrix(int rows, int cols) {
    
    
    
    int** matrix = (int**)malloc(rows * sizeof(int*));
    if (matrix == NULL) {
        printf("Hafıza tahsisi basarisiz.\n");
exit(EXIT_FAILURE);
    }

    for (int i = 0; i < rows; ++i) {
    matrix[i] = (int*)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
        printf("Hafıza tahsisi basarisiz.\n");
    exit(EXIT_FAILURE);
        }
    }
    srand(time(NULL)); 
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            matrix[i][j] = rand() % 100;
        }
    }
    return matrix;
}
void printMatrix(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}
void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
    free(matrix[i]);
    }
   
free(matrix);
}

int main() {
    int rows, cols;
    printf("Satir sayisini girin: ");
    scanf("%d", &rows);
    printf("Sutun sayisini girin: ");
    scanf("%d", &cols);
    int** randomMatrix = createRandomMatrix(rows, cols);
    printf("Olusturulan 2 boyutlu dizi:\n");
    printMatrix(randomMatrix, rows, cols);
    freeMatrix(randomMatrix, rows);

    return 0;
}
