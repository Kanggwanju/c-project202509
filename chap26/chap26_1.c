#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 파티션 함수 만들기
// 피벗을 기준으로 작은 값들은 왼쪽, 큰 값들은 오른쪽으로 재배치
// 최종적으로 확정된 피벗의 인덱스를 반환한다.
                   // 분할시작 인덱스, 분할끝 인덱스
int partition(int arr[], int low, int high) {
    
    // 피벗값을 설정 - 배열의 마지막값을 피벗으로 가정
    int pivot = arr[high];
    // 감독관 설정 - 첫 위치가 -1 인덱스를 가리키게함
    int i = (low - 1);

    // 탐험가 j가 low부터 피벗 바로 앞까지 순회
    for (int j = low; j <= high - 1; j++) {
        // j가 가리키는 값이 피벗보다 작거나 같으면
        if (arr[j] <= pivot) {
            i++; // 감독관이 앞으로 한 칸 이동
            swap(&arr[i], &arr[j]);

        }
    }

    // 모든 탐험이 끝난 후 감독관의 자리를 한칸 이동시키고 피벗과 값 교환
    i++;
    swap(&arr[i], &arr[high]);

    // 피벗의 최종 인덱스 (위치) 반환
    return i;
}

// 배열 출력 함수
void printArray(int A[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main(void) {
    
    // 퀵 정렬: 평균적으로 가장 빠른 속도
    // pivot을 기준으로 작은 것들은 왼쪽, 큰 것들은 오른쪽으로 이동
    // 왼쪽 그룹과 오른쪽 그룹에서 똑같은 일 반복
    // 정의: 피벗을 중심으로 두 그룹으로 나눈다(파티션, Partition)
    
    // 탐험가 j: 배열 전체 순회, 피벗과 값 비교
    // 감독관 i: 피벗보다 작은 값들이 모일 구역의 마지막 위츠를 가리킴

    // 파티션 과정
    // 1. 제일 마지막 요소를 피벗으로 지정
    // 2. j=0 인덱스부터 피벗보다 작은지 확인
    // 2-1. 피벗보다 요소의 수가 크면 지나감
    // 2-2. 처음 피벗보다 작은 요소를 만났을때 i = j로 두고, j = 0 이었을 땐 그대로, j >= 1 이면 첫번째 요소와 교환
    // 2-3. 이후 피벗보다 작은 요소를 만났다면 i+1로 이동, i의 요소와 j의 요소를 교환
    // 3. 파티션의 마무리 (피벗 제자리 찾기): j가 탐색 완료, i+1로 이동, i의 요소와 피벗 요소를 교환

    int arr[] = {7, 2, 1, 6, 8, 5, 3, 4};
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("주어진 배열: \n");
    printArray(arr, len);

    // 파티셔닝 진행
    partition(arr, 0, len - 1);

    printf("\n정렬된 배열: \n");
    printArray(arr, len);

    return 0;
}