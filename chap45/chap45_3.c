#include <stdio.h>

// 연결 리스트 구조체
struct Node {
    int value;
    struct Node* next;
};

// 처음 노드와 연결된 다음 노드의 value를 변경하는 함수
void func(struct Node * node) {
    while(node != NULL && node->next != NULL) {
        int t = node->value;
        node->value = node->next->value;
        node->next->value = t;
        node = node->next->next;
    }
}

// 2024년 3회차, 연결 리스트
int main(void) {
    
    struct Node n1 = {1, NULL}, n2 = {2, NULL}, n3 = {3, NULL};
    n1.next = &n3;
    n3.next = &n2;

    func(&n1);

    struct Node* current = &n1;

    // 정답: 312
    while(current != NULL) {
        printf("%d", current->value);
        current = current->next;
    }

    return 0;
}