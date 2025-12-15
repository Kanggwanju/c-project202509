#include <stdio.h>

struct node {
    int n1;
    struct node *n2;
};

// 2024년 2회차, 연결 리스트
int main(void) {

    struct node a = {10, NULL};
    struct node b = {20, NULL};
    struct node c = {30, NULL};

    struct node *head = &a;
    a.n2 = &b;
    b.n2 = &c;

    // head -> a n1:10, n2 -> b n1:20, n2 -> c n1:30, n2:NULL
    // head는 노드 포인터, a를 가리킴
    // head->n2는 a의 n2 멤버, b
    // head->n2->n1은 b의 n1 멤버

    // 정답: 20
    printf("%d\n", head->n2->n1);

    return 0;
}