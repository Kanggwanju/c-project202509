#include <stdio.h>

int sum_array(int arr[], int n) {
    // 종료 조건: 더할 요소가 없으면(n<=0) 합은 0.
    if (n <= 0) {
        return 0;
    }

    // 재귀 호출: (n-1)번째 요소 + (앞에서 n-1개 요소의 합)
    return arr[n - 1] + sum_array(arr, n - 1);
}

int main(void) {
    
    int my_arr[] = {10, 20, 30, 40, 50};
    printf("배열의 총 합: %d\n", sum_array(my_arr, 5)); // 결과: 150

    return 0;
}