#include <stdio.h>
#include <stdlib.h>

// 병합 알고리즘 (두개의 부분 배열을 합쳐나가면서 정렬)
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;

    // left: 0, right: 7, mid: 3
    int n1 = mid - left + 1; // 왼쪽 배열 부분의 크기
    int n2 = right - mid;    // 오른쪽 배열 부분의 크기

    // 임시 배열 (분할된 두개의 그룹을 의미) - 동적할당으로 배열 생성
    int* L = (int*) malloc(n1 * sizeof(int));
    int* R = (int*) malloc(n2 * sizeof(int));

    // 원본배열에서 임시배열로 데이터 복사
    // [ 7, 2, 6, 4, 5, 8, 3, 6 ]
    for (i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    // 병합 로직 - 2개의 부분배열 (L, R)의 데이터를 하나씩 비교해서
    // 작은 녀석을 병합배열에 쌓기
    // L : [7, 2, 6, 4] || R : [5, 8, 3, 6]
    i = 0;    // L배열의 시작인덱스
    j = 0;    // R배열의 시작인덱스
    k = left; // 병합배열의 시작인덱스

    // L배열의 끝인덱스, R배열의 끝인덱스
    // 왼쪽 오른쪽 중에 한쪽이라도 끝에 도달하면 반복문 종료
    while (i < n1 && j < n2) { 
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // 한쪽 배열에 데이터가 남아있는 상태라면, 그대로 순서대로 뒤에 붙임
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    // 임시 배열의 메모리 해제
    free(L);
    free(R);
}

// 병합 알고리즘 메인 함수
void mergeSort(int arr[], int left, int right) {
    // 재귀 종료 조건 : 쪼갤 배열의 크기가 1이 되면 멈춤
    if (left < right) {
        // 중간인덱스 구하기
        // left - 0, right - 7, mid = 3
        // left - 4, right - 7, mid = 5
        int mid = left + (right - left) / 2;

        // 왼쪽 절반에 대해서 재귀호출을 통해 쪼개기
        mergeSort(arr, left, mid);
        // 오른쪽 절반에 대해서 재귀호출을 통해 쪼개기
        mergeSort(arr, mid + 1, right);
        // 병합 발동
        merge(arr, left, mid, right);
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
    
    // 병합 정렬 (Merge Sort)
    // 최악의 경우에도 O(NlogN) 성능 보장, 추가 배열 필요(O(N))
    // 퀵 정렬: 어려운 파티션 먼저 진행
    // 퀵 정렬과 다르게 우선 끝까지 쪼갠 다음, 합치면서 정렬 (나중에 하는 병합이 핵심)

    // 분할 방식 - 단순 반으로 나눔
    // 과정 - 반으로 자리기를 더 이상 쪼갤 수 없을때까지 반복
    // 특징 - 퀵 정렬의 피벗이나 복잡한 비교 과정 전혀 필요 없음.

    // 재귀의 종료 조건: 배열의 크기가 1이 되면 정렬 완료 선언, 돌아감
    // 이후 병합 과정 시작, 이미 정렬된 두 그룹을 하나의 완벽히 정렬된 그룹으로 합침

    // merge 과정
    // 1. 비교: 두 그룹은 정렬 완료이므로 각 줄의 맨 앞 학생끼리만 키 비교
    // 2. 선택: 더 작은 학생을 먼저 새 줄에 세움.
    // 3. 반복: 한 줄이 텅 빌 때까지 반복
    // 4. 마무리: 남은 줄의 학생들을 그대로 뒤에 붙임
    
    /*
    [ 7, 2, 6, 8, 5, 3, 1, 4 ]
    1. 단순 분할
    [ 7, 2, 6, 8 ] | [ 5, 3, 1, 4 ]
    [ 7, 2 ] | [ 6, 8 ] | [ 5, 3 ] | [ 1, 4 ]
    [ 7 ] | [ 2 ] | [ 6 ] | [ 8 ] | [ 5 ] | [ 3 ] | [ 1 ] | [ 4 ]

    2. merge
    [7] | [2]  [6] | [8]   [3] | [5]  [1] | [4]
    [ 2, 7 ]    [ 6, 8 ]    [ 3, 5 ]      [ 1, 4 ]
        [2, 6, 7, 8]           [1, 3, 4, 5]       
                [1, 2, 3, 4, 5, 6, 7, 8]    
    */


    int arr[] = { 38, 27, 43, 3, 9, 82, 10, 5 };
    int len = sizeof(arr) / sizeof(arr[0]);

    printf("주어진 배열: \n");
    printArray(arr, len);

    // 병합정렬 진행
    mergeSort(arr, 0, len - 1);
    /*
    mergeSort(0, 7)
    ㄴ mid = 3
    ㄴ mergeSort(0, 3)
       ㄴ mid = 1
       ㄴ mergeSort(0, 1)
          ㄴ mid = 0
          ㄴ mergeSort(0, 0) -> 재귀 종료
          ㄴ mergeSort(1, 1) -> 재귀 종료
          ㄴ merge(0, 0, 1) -> L: [38] | R: [27] | arr: [ *27, *38, ...]
       ㄴ mergeSort(2, 3)
          ㄴ mid = 2
          ㄴ mergeSort(2, 2) -> 재귀 종료
          ㄴ mergeSort(3, 3) -> 재귀 종료
          ㄴ merge(2, 2, 3) -> L: [43] | R: [3] | arr: [ 27, 38, *3, *43, ... ]
       ㄴ merge(0, 1, 3) -> L: [27, 38] | R: [3, 43] | arr: [ *3, *27, *38, *43, ... ]
    ㄴ mergeSort(4, 7)
       ㄴ mid = 5
       ㄴ mergeSort(4, 5)
          ㄴ mid = 4
          ㄴ mergeSort(4, 4) -> 재귀 종료
          ㄴ mergeSort(5, 5) -> 재귀 종료
          ㄴ merge(4, 4, 5) -> L: [9] | R: [82] | arr: [ ..., *9, *82, ... ]
       ㄴ mergeSort(6, 7)
          ㄴ mid = 6
          ㄴ mergeSort(6, 6) -> 재귀 종료
          ㄴ mergeSort(7, 7) -> 재귀 종료
          ㄴ merge(6, 6, 7) -> L: [10] | R: [5] | arr: [ ..., 9, 82, *5, *10 ]
       ㄴ merge(4, 5, 7) -> L: [9, 82] | R: [10, 5] | arr: [ ..., *5, *9, *10, *82]
    ㄴ merge(0, 3, 7) -> L: [ 3, 27, 38, 43 ] | R: [ 5, 9, 10, 82 ]
                         ---> arr: [ 3, 5, 9, 10, 27, 38, 43, 82 ]
    
    */

    printf("\n정렬된 배열: \n");
    printArray(arr, len);

    return 0;
}