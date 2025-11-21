#include <stdio.h>

int binarySearch(int arr[], int n, int target) {

    int low = 0;
    int high = n - 1;
    int mid;

    int i = 0;
    while (low <= high) {
        printf("반복문 실행 %d회차\n", i + 1);
        mid = (low + high) / 2; // 중간 인덱스 계산

        if (arr[mid] == target) {
            return mid; // 값을 찾았으면 인덱스 리턴
        } else if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
        i++;
    }

    return -1;
}

int main(void) {
    
    // 이진 탐색(Binary Search): 중간을 보고, 절반을 버림, 빠른 방법
    // 이진 탐색은 데이터가 반드시 정렬되어 있다는 것을 전제로 함
    // 시간 복잡도: O(logN)

    // 정렬이 안되어있으면 정렬부터 진행해야함
    int data[] = {1, 3, 5, 7, 9, 11, 13, 15};

    int size = sizeof(data) / sizeof(data[0]);

    int target_value = 11;

    int index = binarySearch(data, size, target_value);

    if (index == -1) {
        printf("%d 값은 배열에 없습니다.\n", target_value);
    } else {
        printf("%d 값은 배열의 %d번 인덱스에 있습니다.\n", target_value, index);
    }

    return 0;
}