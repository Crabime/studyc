//
// Created by Crabime on 11/29/18.
// 将数组（大小为m）中前n个数移动到最后
//

#include <stdio.h>
#include <stdlib.h>

#define N 5

void move(int * p, int m, int size);

int main() {
    int i, j, m, *p;

    p = malloc(sizeof(int)*N);
    printf("输入%d个数值：\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &p[i]);
    }

    printf("请输入要调整的个数m=");
    scanf("%d", &m);
    printf("\n");
    printf("原始数值为：\n");
    for (i = 0; i < N; i++) {
        printf("%d\t", p[i]);
    }
    printf("\n");

    move(p, m, N);

    printf("输出%d个数值如下：\n", N);
    for (j = 0; j < N; j++) {
        printf("%d\t", p[j]);
    }
}

/**
 * 将p指向的整型数组中前m个数换到最后面
 * @param p 指向整型数组的指针
 * @param m 需要移动的后m个元素
 * @param size 整型数组的大小
 */
void move(int * p, int m, int size) {
    int i, k;
    printf("size大小为：%d\n", size);
    for (i = 0; i < m; i++) {
        k = p[i];
        p[i] = p[size - m + i];
        p[size - m + i] = k;
    }
}