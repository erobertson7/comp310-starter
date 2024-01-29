#include <stdio.h>
#include <stdlib.h>

int matrixA[2][2] = {{1,2},{3,4}};
int matrixB[2][2] = {{5,6},{7,8}};
int aColumns = 2;                     //cannot figure out how to the rows and columns a sizeof(), I was getting weird numbers and results
int aRows = 2;
int bColumns = 2; 
int bRows = 2;
int result_add[2][2];
int result_multiply[2][2];


void addMatrices(int a[aRows][aColumns], int b[bRows][bColumns], int result[2][2]) {
    if(aRows==bRows&&aColumns==bColumns){ //added a check to see that the matrices are the same dimensions
        for (int i = 0; i < aRows; i++) {
            for (int j = 0; j < aColumns; j++) {
                result[i][j] = a[i][j] + b[i][j];
            }
        }
    }
}

void multiplyMatrices(int a[aRows][aColumns], int b[bRows][bColumns], int result[2][2]) {
    if(aRows==bRows&&aColumns==bColumns){  //added a check to see that the matrices are the same dimensions
        for (int i = 0; i < aRows; i++) {
            for (int j = 0; j < aColumns; j++) {
                result[i][j] = 0;
                for (int k = 0; k < 2; k++) {
                    result[i][j] += a[i][k] * b[k][j];
                }
            }
        }
    }
}

void displayMatrix(int mat[2][2]) {
    for (int i = 0; i < aRows; i++) {
        for (int j = 0; j < aColumns; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    
    addMatrices(matrixA, matrixB, result_add);

    printf("\nAddition Result:\n");
    displayMatrix(result_add);

    // Multiply matrices
    multiplyMatrices(matrixA, matrixB, result_multiply);

    printf("\nMultiplication Result:\n");
    displayMatrix(result_multiply);

    return 0;
}