#include <stdio.h>

void sort(int * p, int n);

int main() {
    int num[3], *p;
    printf("Input three numbers:\n");
    for (int i = 0; i < 3; ++i) {
        scanf("%d", &num[i]);
    }
    p = num;
    printf("Before sort:\n");
    for (int i = 0; i < 3; ++i) {
        if (i == 2) printf("%d\n", *(p+i));
        else printf("%d\t", *(p+i));
    }

    sort(p, 3);
    printf("After sort:\n");
    for (int i = 0; i < 3; ++i) {
        printf("%d\t", *(p+i));
    }
    return 0;
}

void sort(int * p, int n) {
    int i, j, k, temp;
    for (i = 0; i < n - 1; i++) {
        k = i;
        for (j = i; j < n; j++) {
            if (*(p+k) > *(p+j)) {
                k = j;
            }
        }
        if (k != i) {
            temp = *(p+k);
            *(p+k) = *(p+i);
            *(p+i) = temp;
        }
    }
}