#include <stdio.h>

void swap(float a[], int i, int j) {
    float t;
    t = a[i];
    a[i] = a[j];
    a[j] = t;
}

int val(float a[], int n, int k) {
    int i, j;
    if (k < 1 || k > n) {
        return 0;
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] == a[j]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int n, i, k, min, max;
    printf("Введіть n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("n має бути натуральним числом\n");
        return 0;
    }
    float a[n];
    printf("Введіть %d попарно різних чисел:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &a[i]);
    }
    printf("Введіть k від 1 до %d: ", n);
    scanf("%d", &k);
    if (!val(a, n, k)) {
        printf("Неправильні дані: числа мають бути попарно різними, а k від 1 до %d\n", n);
        return 0;
    }
    min = 0;
    max = 0;
    for (i = 1; i < n; i++) {
        if (a[i] < a[min]) {
            min = i;
        }
        if (a[i] > a[max]) {
            max = i;
        }
    }
    swap(a, min, max);
    printf("1) ");
    for (i = 0; i < n; i++) {
        printf("%g ", a[i]);
    }
    swap(a, min, max);
    swap(a, min, k - 1);
    printf("\n2) ");
    for (i = 0; i < n; i++) {
        printf("%g ", a[i]);
    }
    printf("\n");
    return 0;
}