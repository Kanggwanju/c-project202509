#include <stdio.h>
#include <string.h>

void reverse(char* str) {
    // null 문자 빼고 문자열 길이 계산
    int len = strlen(str);
    char temp;
    char* p1 = str;
    char* p2 = str + len - 1;
    while (p1 < p2) {
        // Swap 연산
        temp = *p1;
        *p1 = *p2;
        *p2 = temp;
        p1++;
        p2--;
    }
}

// 2024년 1회차, 문자열 뒤집기
int main(void) {

    char str[100] = "ABCDEFGH";

    // str: HGFEDCBA
    reverse(str);

    // len: 8
    int len = strlen(str);

    // 정답: GECA
    for (int i = 1; i < len; i += 2) {
        printf("%c", str[i]);
    }

    printf("\n");
    
    return 0;
}