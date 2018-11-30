//
// Created by admin on 2018/11/30.
// 输入一行文字，找出其中大写字母、小写字母、空格、数字以及其它字符各有多少
//
#include <stdio.h>
#include <string.h>

int * upper_num (const char *p, int len);

int main() {
    char *p = "Hello World, 123#$";
    int *r, len = strlen(p);
    r = upper_num(p, len);
    printf("Lower:%d\tUpper:%d\tNum:%d\tWhitespace:%d\tOthers:%d\n",
            r[0], r[1], r[2], r[3], r[4]);
}

/**
 * 计算字符串p中小写字符、大写字符、整数字符、空格字符、其它字符个数
 * @param p 原始字符串
 * @param len 字符串长度
 * @return 包含结果的数组指针
 */
int * upper_num (const char *p, int len) {
    // 记住：数组需要初始化！
    int i, *r, result[5] = {0, 0, 0, 0, 0};
    r = result;
    for (i = 0; i < len; i++) {
        if (p[i] >= 'a' && p[i] <= 'z') {
            result[0] = result[0] + 1;
        } else if(p[i] >= 'A' && p[i] <= 'Z') {
            result[1] = result[1] + 1;
        } else if(p[i] >= '0' && p[i] <= '9') {
            result[2] = result[2] + 1;
        } else if(p[i] == ' ') {
            result[3] = result[3] + 1;
        } else {
            result[4] = result[4] + 1;
        }
    }
    return r;
}

