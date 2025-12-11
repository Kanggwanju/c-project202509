#include <stdio.h>

int main(void) {
    
    int a[4] = {0, 2, 4, 8};
    int b[3] = {};
    int i = 1;
    int sum = 0;
    int *p1;

    /*
        p1 = a + 1 = a[1]
        b[0] = *p1 - a[0] = a[1] - a[0] = 2 - 0 = 2
        sum = sum + b[0] + a[1] = 0 + 2 + 2 = 4

        p1 = a + 2 = a[2]
        b[1] = *p1 - a[1] = a[2] - a[1] = 4 - 2 = 2
        sum = 4 + b[1] + a[2] = 4 + 2 + 4 = 10

        p1 = a + 3 = a[3]
        b[2] = *p1 - a[2] = a[3] - a[2] = 8 - 4 = 4
        sum = 10 + b[2] + a[3] = 10 + 4 + 8 = 22
    */
    for (i; i < 4; i++) {
        p1 = a + i;
        b[i - 1] = *p1 - a[i - 1];
        sum = sum + b[i - 1] + a[i];
    }

    // 정답: 22
    printf("%d", sum);

    return 0;
}