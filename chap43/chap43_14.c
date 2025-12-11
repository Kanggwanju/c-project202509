#include <stdio.h>

// 함수 선언
int len(char* p);

int main(void) {
    
    char* p1 = "2022";
    char* p2 = "202207";

    int a = len(p1); // 4
    int b = len(p2); // 6

    // 정답: 10
    printf("%d", a + b);

    return 0;
}

// 함수 정의, 문자 수 세기
int len(char* p) {
    int r = 0;
    while (*p != '\0') {
        p++;
        r++;
    }
    return r;
}