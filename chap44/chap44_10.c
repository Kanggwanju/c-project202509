#include <stdio.h>

// 2024년 2회차, 2차원 배열, 포인터 배열
int main(void) {

    int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // arr[1]: {4, 5, 6}, arr[2]: {7, 8, 9}
    int* parr[2] = { arr[1], arr[2] };

    // 정답: 8 + 9 + 4 = 21
    printf("%d", parr[1][1], + *(parr[1] + 2) + **parr);
    
    return 0;
}