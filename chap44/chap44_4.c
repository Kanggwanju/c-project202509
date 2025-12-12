#include <stdio.h>

int f(int n) {
    if (n <= 1) return 1;
    else return n * f(n - 1);
}

// 2023년 3회차, 팩토리얼 함수
int main(void) {
    
    // 정답: f(7) = 7 * f(6) = ... = 7*6*5*4*3*2*1 = 5040
    printf("%d", f(7));

    return 0;
}