#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    
    // 버블 정렬 (Bubble Sort) - 바로 옆 데이터와 비교해서 조건에 안 맞으면 자리 바꿈
    // 한 칸씩 움직이며 옆자리 숫자와 비교하여 pass 마다 가장 큰 숫자를 마지막에 고정시킴

    int arr[] = {5, 1, 4, 2, 8};

    int i, j; // i : pass, j : swap
    
    // 배열 데이터 개수 구하기
    int len = sizeof(arr) / sizeof(int);

    // 버블 정렬 실행
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }

        // 각 pass 출력
        printf("버블정렬 pass %d: ", i + 1);
        for (int k = 0; k < len; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
    
    // 출력
    printf("\n버블정렬 후: ");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}