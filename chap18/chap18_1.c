#include <stdio.h>

int main(void) {

    // 문자열
    // 1. 큰따옴표 (널 문자 자동 추가)
    char str1[] = "Hello";
    printf("str1 size: %d\n", sizeof(str1));

    // 2. 작은따옴표 (널 문자 수동 추가)
    // 널 문자 수동 추가를 안 하면 버그 발생
    char str2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("str2 size: %d\n", sizeof(str2));

    // 포맷팅은 %s
    printf("str1: %s\n", str1);
    printf("str2: %s\n", str2);

    return 0;
}