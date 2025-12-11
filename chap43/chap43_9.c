#include <stdio.h>

int main(void) {
    
    int *arr[3];
    int a = 12, b = 24, c = 36;

    arr[0] = &a;
    arr[1] = &b;
    arr[2] = &c;

    // arr[1]은 b의 주소, *arr[1]은 arr[1]이 가리키는 주소의 실제 값 = 24
    // *arr은 arr[0], a의 주소, **arr은 arr[0]이 가리키는 주소의 실제 값 = 12
    // 정답: 24 + 12 + 1 = 37
    printf("%d\n", *arr[1] + **arr + 1);

    return 0;
}