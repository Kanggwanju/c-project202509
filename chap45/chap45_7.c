#include <stdio.h>
#include <stdlib.h>

typedef struct Data {
    int value;
    struct Data *next;
} Data;

Data* insert(Data* head, int value) {
    Data* new_node = (Data*)malloc(sizeof(Data));
    new_node->value = value;
    new_node->next = head;
    return new_node;
}

Data* reconnect(Data* head, int value) {
    if (head == NULL || head->value == value) return head;
    Data *prev = NULL, *curr = head;

    while (curr != NULL && curr->value != value) {
        prev = curr;
        curr = curr->next;
    }

    if (curr != NULL && prev != NULL) {
        prev->next = curr->next;
        curr->next = head;
        head = curr;
    }

    return head;
}

// 2025년 1회차, 연결 리스트
int main(void) {

    Data *head = NULL, *curr;

    // head -> Data(value:5) -> Data(value:4)
    // -> Data(value:3) -> Data(value:2) -> Data(value:1)
    for (int i = 1; i <= 5; i++)
        head = insert(head, i);
    
    // head -> Data(value:3) -> Data(value:5)
    // -> Data(value:4) -> Data(value:2) -> Data(value:1)
    head = reconnect(head, 3);
    
    // 정답: 35421
    for (curr = head; curr != NULL; curr = curr->next)
        printf("%d", curr->value);

    return 0;
}