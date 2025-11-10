#include <stdio.h>
#include <string.h>


int main(void) {
    
    char origin[] = "apple";
    char copy[10];

    // 문자열은 '='으로 바로 복사할 수 없음
    // copy = origin;

    // 문자열 복사하기
    // 버퍼 오버플로우 발생 위험
    strcpy(copy, origin);

    printf("원본: %s\n", origin);
    printf("사본: %s\n", copy);

    return 0;
}