#include <stdio.h>

// 구조체
struct good {
    char name[10];
    int age;
};

int main(void) {
    
    struct good s[] = {
        "Kim", 28,  // [0]
        "Lee", 38,  // [1]
        "Seo", 50,  // [2]
        "Park", 35  // [3]
    };

    // 구조체 포인터
    struct good *p;
    // p는 s의 0번 인덱스를 바라봄
    p = s;
    p++; // 1번 인덱스를 바라봄

    printf("%s\n", p->name); // Lee
    printf("%d\n", p->age);  // 38

    return 0;
}