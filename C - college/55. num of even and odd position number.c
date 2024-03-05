#include <stdio.h>

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int e = 0;
    int o = 0;

    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            e++;
        } else {
            o++;
        }
    }

    printf("number of even = %d\n", e);
    printf("number of odd = %d", o);

    return 0;
}
