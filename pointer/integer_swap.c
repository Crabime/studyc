//
// Created by Crabime on 11/29/18.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * 输入3个数（需要一个单独的函数）
 * 处理十个数（将最小的数与第一个对换，最大的数与最后一个对换）
 * 输出十个数
 */

#define MAX 3

int * getInput();

void move(int *p);

int main () {
    int i;
    int *p = getInput();
    printf("元素输出结果为：\n");
    for (i = 0; i < MAX; ++i) {
        printf("%d \t", *(p + i));
    }
    printf("\n");
    move(p);
    printf("处理之后的结果为：\n");
    for (i = 0; i < MAX; ++i) {
        printf("%d \t", *(p + i));
    }
}

/**
 * 移动元素，将最小元素放在最前面，最大元素放在最后面
 * @param p 原始int数组指针
 */
void move(int *p) {
    int i, temp, min = 0;
    int max = MAX - 1;
    for(i = 0; i < MAX; i++) {
        if (p[i] < p[min]) {
            min = i;
        } else if (p[i] > p[max]) {
            max = i;
        }
    }
    if (min != 0) {
        temp = p[0];
        p[0] = p[min];
        p[min] = temp;
    }
    if (max != MAX - 1) {
        temp = p[max];
        p[max] = p[MAX - 1];
        p[MAX - 1] = temp;
    }
}

/**
 * 获取连续的输入文件
 * @return 输入整型数组指针
 */
int * getInput() {
    int *p, i;
    // 给指针分配数组大小
    p = malloc(sizeof(int)*MAX);
    for (i = 0; i < MAX; ++i) {
        scanf("%d", &p[i]);
    }
    return p;
}