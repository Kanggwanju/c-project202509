#include <stdio.h>

int main(void) {
    
    // 삽입 정렬 (Insertion Sort)
    // 특징: 정렬된 영역을 점차 넓혀가는 방식
    // 두번째부터 시작하여 한개씩 뽑아서 좌측에 어디로 들어갈지 정함

    int arr[] = {5, 1, 4, 2, 8};

    int i, j, key; // i : pass, j : swap, key : 삽입대상 데이터를 백업
    
    // 배열 데이터 개수 구하기
    int len = sizeof(arr) / sizeof(int);

    // 삽입 정렬 실행
    for (i = 1; i < len; i++) {

        // 카드를 한장 뽑아서 백업
        key = arr[i];

        // 왼쪽을 확인하면서 자기보다 크면 오른쪽으로 한칸 이동시킴
        // 자기보다 작으면 그자리로 지가 삽입됨
        for (j = i - 1; j >= 0 && arr[j] > key; j--) {
            // 값을 뒤로 한칸 밀어버림
            arr[j + 1] = arr[j];
        }
        // 반복문이 멈췄을 때 멈춘 자리로 KEY를 삽입
        arr[j + 1] = key;

        // 각 pass 출력
        printf("삽입정렬 pass %d: ", i);
        for (int k = 0; k < len; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
    
    // 출력
    printf("\n삽입정렬 후: ");
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}