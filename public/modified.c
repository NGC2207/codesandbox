#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// 函数声明
int expandAroundCenter(char *s, int left, int right);
char* longestPalindrome(char *s);

int main() {
    char s[] = "babad";
    char *result = longestPalindrome(s);
    printf("最长回文子串: %s\n", result);
    free(result); // 记得释放内存，不然内存泄漏了可别怪我
    return 0;
}

// 中心扩展法
int expandAroundCenter(char *s, int left, int right) {
    int L = left, R = right;
    int len = strlen(s); // 提前计算长度，别每次都调用
    while (L >= 0 && R < len && s[L] == s[R]) {
        L--;
        R++;
    }
    return R - L - 1;
}

// 找到最长回文子串
char* longestPalindrome(char *s) {
    if (s == NULL || strlen(s) < 1) return "";
    int start = 0, end = 0;
    int len = strlen(s); // 提前计算长度，别每次都调用
    for (int i = 0; i < len; i++) {
        int len1 = expandAroundCenter(s, i, i);     // 奇数长度的回文子串
        int len2 = expandAroundCenter(s, i, i + 1); // 偶数长度的回文子串
        int max_len = len1 > len2 ? len1 : len2;
        if (max_len > end - start) {
            start = i - (max_len - 1) / 2;
            end = i + max_len / 2;
        }
    }
    // 分配内存并复制最长回文子串
    char *result = (char *)malloc((end - start + 2) * sizeof(char));
    if (result == NULL) { // 检查 malloc 是否成功
        return NULL; // 如果失败了，直接返回 NULL，别让程序崩溃
    }
    strncpy(result, s + start, end - start + 1);
    result[end - start + 1] = '\0';
    return result;
}