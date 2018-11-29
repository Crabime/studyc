#include <stdio.h>
#include <string.h>

/**
 * 输入三个字符串，按由小到大的顺序输出
 */

void swap_str(char **p1, char **p2);

int main() {
    char *p1, *p2, *p3;
    char str1[10], str2[10], str3[10];
    printf("Input origin value:\n");
    scanf("%s %s %s", str1, str2, str3);
    p1 = str1, p2 = str2, p3 = str3;
    if (strcmp(p1, p2) > 0) {
        swap_str(&p1, &p2);
    }
    if (strcmp(p1, p3) > 0) {
        swap_str(&p1, &p3);
    }
    if (strcmp(p2, p3) > 0) {
        swap_str(&p2, &p3);
    }
    printf("Output result:\n");
    printf("a=%s,b=%s,c=%s", p1, p2, p3);
}

/**
 * 对字符串进行比较并互换
 */
void swap_str(char **p1, char **p2) {
    char *tmp;
    tmp = *p1;
    *p1 = *p2;
    *p2 = tmp;
}