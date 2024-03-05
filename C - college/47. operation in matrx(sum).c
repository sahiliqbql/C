#include <stdio.h>

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int arr2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int add[3][3];

    // addition
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            add[i][j] = arr[i][j] + arr2[i][j];
        }
    }

    // print the result
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }

    return 0;
}
