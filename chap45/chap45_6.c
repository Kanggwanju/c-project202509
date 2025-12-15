#include <stdio.h>
#include <stdlib.h>

// 2차원 배열 초기화
void set(int** arr, int* data, int rows, int cols) {
    for (int i = 0; i < rows * cols; ++i) {
        arr[((i + 1) / rows) % rows][(i + 1) % cols] = data[i];
    }
}

// 2025년 1회차, 2차원 배열
int main(void) {
    
    int rows = 3, cols = 3, sum = 0;
    int data[] = {5, 2, 7, 4, 1, 8, 3, 6, 9};

    // 2차원 배열 3행, 3열 동적 할당
    int** arr = (int**) malloc(sizeof(int*) * rows);
    for (int i = 0; i < cols; i++) {
        arr[i] = (int*) malloc(sizeof(int) * cols);
    }

    /*
        9 5 2
        7 4 1
        8 3 6
    */
    set(arr, data, rows, cols);
    for (int i = 0; i < rows * cols; i++) {
        //                               i가 짝수면 1, 홀수면 -1
        sum += arr[i / rows][i % cols] * (i % 2 == 0 ? 1 : -1);
    }

    // 정답: 13
    printf("%d", sum);

    return 0;
}