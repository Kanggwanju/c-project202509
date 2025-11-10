#include <stdio.h>

int main(void) {
    
    int arr[5] = {10, 20, 30, 40, 50};

    // arr: 포인터 변수, 0번 인덱스의 주소를 저장
    printf("배열의 이름(arr)이 가진 주소: %p\n", arr);
    printf("배열 0번 인덱스의 주소: %p\n", &arr[0]);    

    return 0;
}