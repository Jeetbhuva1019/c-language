#include <stdio.h>

int main() {
    int rows = 5;
    int i, j, k;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < rows - i - 1; j++) {
            printf("  "); // Print spaces for alignment
        }

        for (j = rows - i; j <= rows; j++) {
            printf("%d ", j); // Print numbers in ascending order
        }

        for (k = rows - 1; k >= rows - i; k--) {
            printf("%d ", k); // Print numbers in descending order
        }

        printf("\n");
    }

    return 0;
}