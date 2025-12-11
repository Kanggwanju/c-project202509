#include <stdio.h>

int main(void) {
    
    int i, j;
    int temp;
    int a[5] = {75, 95, 85, 100, 50};

    // 버블 정렬 알고리즘: 인접한 두 요소를 비교하여 큰 값을 오른쪽으로 이동
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4 - i; j++) {
            if (a[j] > a[j + 1]) {
                // Swap 알고리즘
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // 정답: 50 75 85 95 100
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}