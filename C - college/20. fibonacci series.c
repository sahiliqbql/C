#include <stdio.h>

int main() {
    int n;
    printf("Enter range: ");
    scanf("%d", &n);

    int a = 0, b = 1, c;

    printf("Fibonacci series: %d %d ", a, b);

    for (int i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}