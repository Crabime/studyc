//
// Created by admin on 2018/11/30.
// 一个包含n个字符的字符串，写一个函数，将此字符串中从第m个字符开始的全部字符复制到另一个字符中并输出
//

#include <stdio.h>
#include <string.h>

int main() {
    char *o = "hello world";
    int m, len = strlen(o);
    char *p;
    printf("Original String is %s\n", o);
    printf("Length is: %d\n", len);
    printf("Input split length:");
    scanf("%d", &m);
    p = o + (m - 1);
    printf("Result is: %s\n", p);
}