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

// 퀵 정렬 함수
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
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
    // 시간복잡도: 평균적 O(N log N)
    
    // 최악의 경우 존재
    // 이미 정렬된 배열일 경우 전혀 분할을 못하고 하나씩 줄여나감
    // -> 시간복잡도: O(N^2)까지 성능 저하
    
    // 탐험가 j: 배열 전체 순회, 피벗과 값 비교
    // 감독관 i: 피벗보다 작은 값들이 모일 구역의 마지막 위츠를 가리킴

    // 파티션 과정
    // 1. 제일 마지막 요소를 피벗으로 지정
    // 2. j=0 인덱스부터 피벗보다 작은지 확인
    // 2-1. 피벗보다 요소의 수가 크면 지나감
    // 2-2. 피벗보다 작거나 같은 요소를 만났다면 i+1로 이동, i의 요소와 j의 요소를 교환
    // 3. 파티션의 마무리 (피벗 제자리 찾기): j가 탐색 완료, i+1로 이동, i의 요소와 피벗 요소를 교환

    int arr[] = {7, 2, 1, 6, 8, 5, 3, 4};
    /*
    quickSort(0, 7)
    ㄴ partition(0, 7) - [2, 1, 3, **4, 8, 5, 7, 6] (pi: 3)
    ㄴ quickSort(0, pi - 1)
       ㄴ partition(0, 2) - [2, 1, **3] (pi: 2)
       ㄴ quickSort(0, pi - 1)
          ㄴ partition(0, 1) - [**1, 2] (pi: 0)
          ㄴ quickSort(0, pi - 1) - 재귀 종료(정렬할 원소 1개 이하)
          ㄴ quickSort(pi + 1, 1) - 재귀 종료
       ㄴ quickSort(pi + 1, 2)
    ㄴ quickSort(pi + 1, 7)
       ㄴ partition(4, 7) - [5, **6, 7, 8] (pi: 5)
       ㄴ quickSort(4, pi - 1) - 재귀 종료
       ㄴ quickSort(pi + 1, 7)
          ㄴ partition(6, 7) - [7, **8] (pi: 7)
          ㄴ quickSort(6, pi - 1) - 재귀 종료(정렬할 원소 1개 이하)
          ㄴ quickSort(pi + 1, 7) - 재귀 종료(low > high)
    */

    int len = sizeof(arr) / sizeof(arr[0]);

    printf("주어진 배열: \n");
    printArray(arr, len);

    // 퀵 정렬 진행
    quickSort(arr, 0, len - 1);

    printf("\n정렬된 배열: \n");
    printArray(arr, len);

    return 0;
}