#include <stdio.h>

// 2024년 1회차, 비교연산, 삼항연산자, 비트 이동 연산
int main(void) {
    
    int v1 = 0, v2 = 35, v3 = 29;

    // 1. v1 > v2 -> 0 > 35는 False, v1(0) 실행
    // 2. v1(0)은 False이므로 else 실행
    if (v1 > v2 ? v2 : v1) {
        v2 = v2 << 2;
    } else {
        // 비트 이동 연산
        // << : 2^n 곱하기
        // >> : 2^n 나누기
        v3 = v3 << 2; // 29 * 4 = 116
    }

    // 정답: 35 + 116 = 151
    printf("%d", v2 + v3);

    return 0;
}