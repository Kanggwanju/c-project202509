#include <stdio.h>

void doubleElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        // 배열은 원래 포인터이므로, 바로 Call by Reference 가능
        arr[i] *= 2;
    }
}

int main(void) {
    
    int nums[5] = {1, 2, 3, 4, 5};

    doubleElements(nums, 5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}