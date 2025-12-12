#include <stdio.h>
#include <string.h>

void sumFn(char* d, const char* s) {
    while (*s) {
        // s가 가리키고 있는 것을 d가 가리키고 있는 것에 넣음
        *d++ = *s++;
    }
    *d = '\0';
}

// 2024년 2회차, 문자열 복사
int main(void) {
    
    const char* str1 = "first";
    char str2[50] = "teststring";
    int result = 0;

    // str2: f i r s t \0 r i n g \0
    sumFn(str2, str1);

    for (int i = 0; str2[i] != '\0'; i++) {
        result += i;
    }

    // 정답: 10
    printf("%d", result);

    return 0;
}