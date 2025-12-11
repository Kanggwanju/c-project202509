#include <stdio.h>

int main(void) {
    
    int i = 0, c = 1;
    while (i < 10) {
        i++;
        c *= i;
    }
    // 정답: 10 팩토리얼 = 1 * 2 * ... * 10 = 3628800
    printf("%d", c);

    return 0;
}