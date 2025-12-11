#include <stdio.h>

int r1() { return 4; }

int r10() { return 30 + r1(); }

int r100() { return 200 + r10(); }

int main(void) {
    /*
        r1() = 4
        r10() = 30 + 4 = 34
        r100() = 200 + 34 = 234
        정답: 234
    */
    printf("%d\n", r100());
    return 0;
}