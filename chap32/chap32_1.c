#include <stdio.h>
#include <stdlib.h>

// 연결리스트의 기본 단위 노드 구조체 정의
typedef struct Node {
    int data;   // 실제로 저장할 값
    struct Node* next; // 다음 노드의 주소를 저장할 포인터
} Node;


int main(void) {
    
    // 연결리스트: 실제 값 + 다음 노드의 주소 포인터
    // 배열처럼 미리 공간 할당하지 않고, 필요할 때마다 노드를 하나씩 생성
    // malloc으로 생성되어 메모리 여기저기에 흩어져서 존재
    // 흩어져 있는 노드를 순서대로 찾아가기 위해 next 포인터를 사용

    // 노드를 동적으로 1개 생성
    Node* new_node1 = (Node*)malloc(sizeof(Node));

    // new_node는 실제 노드를 가리키는 포인터다
    // (*new_node).data = 10;
    new_node1->data = 10;
    new_node1->next = NULL; // 아직 연결되지 않음을 표현

    // 노드를 동적으로 1개 생성
    Node* new_node2 = (Node*)malloc(sizeof(Node));

    // new_node는 실제 노드를 가리키는 포인터다
    new_node2->data = 20;
    new_node2->next = NULL; // 아직 연결되지 않음을 표현

    // 연결 코드
    new_node1->next = new_node2;

    printf("새 노드1의 저장된 데이터: %d\n", new_node1->data);
    printf("새 노드2의 저장된 데이터: %d\n", new_node2->data); // new_node1->next->data

    // 사용이 끝난 메모리는 해제
    free(new_node1);
    free(new_node2);

    return 0;
}