//
// Created by admin on 2018/11/30.
// 报数活动
//

#include <stdio.h>
#include <stdbool.h>

void get_last(_Bool * n, int size);

int main() {
    int n = 10, i = 0;
    bool b[10];
    bool *p;
    for(i = 0; i < n; i++) {
        b[i] = true;
    }
    p = b;
    get_last(p, n);
}

void get_last(bool * n, int size) {

    int i, j = 0, len = size;
    while (len > 1) {
        for (i = 0; i < size; i++) {
            if (n[i]) {
                j++;
                if (j == 3) {
                    j = 0;
                    n[i] = false;
                    len--;
                }
            }
        }
    }

    for(i = 0; i < size; i++) {
        if (n[i]) {
            printf("Last person is : %d\n", i);
        }
    }
}