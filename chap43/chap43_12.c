#include <stdio.h>

int func(int a) {
    if (a <= 1) return 1;
    return a * func(a - 1); // 재귀
}

int main(void) {

    int a;

    // 결과가 120 나오는 입력값 a
    scanf("%d", &a);
    
    // 120 = func(5) = 5 * func(4) = 5 * 4 * func(3) = ... = 5 * 4 * 3 * 2 *1 = 120
    printf("%d", func(a));

    return 0;
}