#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    
    // 선택 정렬 (Selection Sort) - 전체를 다 훑어서 가장 작거나 큰 놈을 선택, 올바른 자리로 옮김
    // 특징: 교환은 각 단계에서 단 한 번만 수행
    // 가장 작은 값을 찾아서 제일 앞으로 고정시키고 다음 pass에서는 나머지 중 가장 작은 값 찾음

    int arr[] = {5, 1, 4, 2, 8};

    int i, j, min_index; // i : pass, j : swap, min_index : 최소인덱스
    
    // 배열 데이터 개수 구하기
    int len = sizeof(arr) / sizeof(int);

    // 선택 정렬 실행, i는 정렬될 위치
    for (i = 0; i < len - 1; i++) {

        // 현재 위치(i)를 최솟값의 위치라고 가정
        min_index = i;

        // 각 pass 마다 i 인덱스의 요소는 최소값으로 고정됨,
        // 고정된 값을 제외하고 최솟값을 찾음.
        // 최소 인덱스를 탐색하기 위해 자리뺏기를 시작
        for (j = i + 1; j < len; j++) {
            // 최소 인덱스 값보다 새로운 j가 작다고 판단되면
            if (arr[j] < arr[min_index]) {
                // 그 j를 최소인덱스로 갱신
                min_index = j;
            }
        }
        // 최소 인덱스 탐색이 끝난후 찾은 최솟값과 현재 위치(i)의 값을 교환
        swap(&arr[i], &arr[min_index]);

        // 각 pass 출력
        printf("선택정렬 pass %d: ", i + 1);
        for (int k = 0; k < len; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
    
    // 출력
    printf("\n선택정렬 후: ");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}