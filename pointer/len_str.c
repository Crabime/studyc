//
// Created by admin on 2018/11/30.
// 输入一个字符串，计算字符串的长度
//
#include <stdio.h>
#include <string.h>

#define MAX 20

int cal_str(char *str);

int main() {
    char *a, c[MAX];
    a = c;
    printf("Input a str:\n");
    fgets(a, MAX, stdin);
    int b = cal_str(a);
    printf("Result = %d\n", b);
    printf("strlen result : %d\n", strlen(a));
}

int cal_str(char *str) {
    char t = str[0], i = 1;
    while (t != '\0') {
        t = *(str + i);
        i++;
    }
    return i - 1;
}