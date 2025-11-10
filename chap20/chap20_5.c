#include <stdio.h>

void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

int main(void) {
    int x = 10, y = 20;
    swap(x, y);

    // 함수에 사본 전달한 것을 잊지 말자.
    // x = 10, y = 20
    printf("x = %d, y = %d\n", x, y); 

    return 0;
}