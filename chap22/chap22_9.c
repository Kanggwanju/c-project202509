#include <stdio.h>
#include <string.h>

int main(void) {
    
    char *p[2];
    char s1[] = "C language";
    char s2[] = "is fun!";
    p[0] = s1;
    p[1] = s2;

    // p[0]: s1의 시작주소, p[0] + 2: s1 + 2 (l)
    // %s: 널 문자가 나올 때까지 반복문으로 모든 글자 출력
    printf("%s\n", p[0] + 2); // language

    // s2의 길이
    printf("%zu\n", strlen(p[1])); // 7

    return 0;
}