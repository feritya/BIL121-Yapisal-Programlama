/******************************************************************************
Örnek-3 ) 3 * 2 rastgele elemanlardan oluşan bir dinamik dizi oluşturunuz. Bu dizinin
transpozunu (satır ile sütun yer değiştirecek.) alın. Dizinin her iki halini yazdırın.
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
int** transposeMatrix(int** matrix, int rows, int cols) {
    int** transposedMatrix = (int**)malloc(cols * sizeof(int*));
if (transposedMatrix == NULL) {
    printf("Hafıza tahsisi basarisiz.\n");
    exit(EXIT_FAILURE);
    }
for (int i = 0; i < cols; ++i) {
        transposedMatrix[i] = (int*)malloc(rows * sizeof(int));
if (transposedMatrix[i] == NULL) {
        printf("Hafıza tahsisi basarisiz.\n");
        exit(EXIT_FAILURE);
    }
}

for (int i = 0; i < rows; ++i) {
for (int j = 0; j < cols; ++j) {
    transposedMatrix[j][i] = matrix[i][j];
    }
}
return transposedMatrix;
}
void freeMatrix(int** matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        free(matrix[i]);
    }
    free(matrix);
}

int main() {
    int rows = 3, cols = 2;
    int** randomMatrix = createRandomMatrix(rows, cols);
    printf("Oluşturulan 3x2 boyutlu dizi:\n");
    printMatrix(randomMatrix, rows, cols);

    int** transposedMatrix = transposeMatrix(randomMatrix, rows, cols);
    printf("\nTranspozu:\n");
    printMatrix(transposedMatrix, cols, rows);

    freeMatrix(randomMatrix, rows);
    freeMatrix(transposedMatrix, cols);

    return 0;
}
