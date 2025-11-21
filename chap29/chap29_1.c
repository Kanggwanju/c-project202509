#include <stdio.h>

// 선형 탐색 수행 함수
int linearSearch(int arr[], int n, int target) {
    // 배열을 처음부터 끝까지 순회
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            // 찾았으면 해당 시점의 i를 리턴
            return i;
        }
    }
    return -1; // 못찾았을 때 -1을 리턴
}

int main(void) {
    
    // 선형 탐색(Linear Search): 맨 처음부터 끝까지 확인
    // 장점: 구현이 매우 쉬움, 데이터 정렬 x여도 사용 가능
    // 단점: 데이터가 많아지면 매우 비효울적, 최선: O(1), 최악: O(N)

    int data[] = {18, 7, 25, 30, 11, 9};
    int size = sizeof(data) / sizeof(data[0]);
    int target_value = 11; // 찾고싶은 값

    int index = linearSearch(data, size, target_value);

    if (index == -1) {
        printf("%d 값은 배열에 없습니다.\n", target_value);
    } else {
        printf("%d 값은 배열의 %d번 인덱스에 있습니다.\n", target_value, index);
    }

    return 0;
}