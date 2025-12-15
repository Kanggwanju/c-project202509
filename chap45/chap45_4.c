#include <stdio.h>

// arr: pp
// *arr: p
// *(*arr + i): arr[i]
void func(int** arr, int size) {
    for (int i = 0; i < size; i++) {
        *(*arr + i) = (*(*arr + i) + i) % size;
    }
}

// 2024년 3회차, 이중 포인터
int main(void) {
    
    int arr[] = {3, 1, 4, 1, 5};
    int* p = arr;
    int** pp = &p;
    int num = 6;

    // 3, 2, 1, 4, 4
    func(pp, 5);
    num = arr[2];

    // 정답: 1
    printf("%d", num);

    return 0;
}