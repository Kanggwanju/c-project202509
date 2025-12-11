#include <stdio.h>

int main(void) {
    
    int arr[3];
    int s = 0;

    // arr[0] = 1
    *(arr + 0) = 1;

    // arr[1] = arr[0] + 2 = 1 + 2 = 3
    arr[1] = *(arr + 0) + 2;

    // arr[2] = arr[0] + 3 = 1 + 3 = 4
    arr[2] = *arr + 3;

    // s = 1 + 3 + 4 = 8
    for (int i = 0; i < 3; i++) {
        s = s + arr[i];
    }

    // 정답: 8
    printf("%d", s);

    return 0;
}