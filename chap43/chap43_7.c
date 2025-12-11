#include <stdio.h>

// 함수 선언
int mp(int base, int exp);

int main(void) {

    int res;
    res = mp(2, 10);
    // 정답: 1024
    printf("%d", res);
    return 0;
}

// 함수 정의
int mp(int base, int exp) {
    int res = 1;
    // 1 * 2 * ... * 2 = 2^10 = 1024
    for (int i = 0; i < exp; i++) {
        res = res * base;
    }
    return res;
}