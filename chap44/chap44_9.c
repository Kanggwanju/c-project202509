#include <stdio.h>
#include <ctype.h>

// 2024년 1회차, 아스키 코드
int main(void) {
    
    char* p = "It is 8";
    char result[100];
    int i;

    // 참고: A: 65, a: 97, '0': 48
    for (i = 0; p[i] != '\0'; i++) {
        if (isupper(p[i])) // 대문자면 true
            result[i] = (p[i] - 'A' + 5) % 26 + 'A';
        else if (islower(p[i])) // 소문자면 true
            result[i] = (p[i] - 'a' + 10) % 26 + 'a';
        else if (isdigit(p[i])) // 숫자면 true
            result[i] = (p[i] - '0' + 3) % 10 + '0';
        else
            result[i] = p[i];
    }

    result[i] = '\0';
    // 정답: Nd sc 1
    printf("%s\n", result);

    return 0;
}