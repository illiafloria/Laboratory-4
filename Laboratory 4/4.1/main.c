#include <stdio.h>
void rev(float a[], int start, int end) {
    int i;
    for (i = end; i >= start; i--) {
        printf("%g ", a[i]);
    }
}
int main() {
    int n, i;
    printf("Введіть n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("n має бути натуральним числом\n");
        return 0;
    }
    float a[2 * n];
    printf("Введіть %d чисел:\n", 2 * n);
    for (i = 0; i < 2 * n; i++) {
        scanf("%f", &a[i]);
    }
    printf("1) ");
    for (i = 0; i < n; i++) {
        printf("%g ", a[i]);
    }
    rev(a, n, 2 * n - 1);
    printf("\n2) ");
    rev(a, 0, n - 1);
    for (i = n; i < 2 * n; i++) {
        printf("%g ", a[i]);
    }
    printf("\n");
    return 0;
}