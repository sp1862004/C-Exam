#include <stdio.h>

#define ROWS 3
#define COLS 3

float calculateAverage(int arr[ROWS][COLS], int rows, int cols) {
    int sum = 0;
    int totalElements = rows * cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += arr[i][j];
        }
    }

    return (float)sum / totalElements;
}

int main() {
    int array[ROWS][COLS];

    printf("Enter the elements of a %dx%d array:\n", ROWS, COLS);
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    float average = calculateAverage(array, ROWS, COLS);

    printf("The average of all elements is: %.2f\n", average);

    return 0;
}
