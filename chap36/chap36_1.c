#include <stdio.h>
#include <stdlib.h>

// 이진 트리(Binary Tree): 모든 노드의 차수가 2 이하인 트리
typedef struct TreeNode {
    int data;               // 노드가 저장할 데이터
    struct TreeNode* left;  // 왼쪽노드를 가리키는 포인터
    struct TreeNode* right; // 오른쪽노드를 가리키는 포인터
} TreeNode;

int main(void) {
    
    // 계층 구조(Hierarchical Structure)
    // 나무가 뿌리에서 시작해 여러 가지로 뻗어 나가는 모습과 닮아서 '트리'가 되었음

    // 노드(Node): 트리를 구성하는 기본 요소
    // 루트(Root): 트리의 시작점이 되는 노드
    // 간선(Edge): 노드와 노드를 잇는 선

    // 부모 노드(Parent Node): 특정 노드의 바로 위에 연결된 노드, 부모 노드는 하나
    // 자식 노드(Child Node): 특정 노드의 바로 아래에 연결된 노드
    // 형제 노드(Sibling Node): 같은 부모를 가지는 노드

    // 리프 노드(Leaf Node): 자식이 하나도 없는 노드
    // 내부 노드(Internal Node): 자식이 하나 이상 있는 노드

    // 노드의 차수(Degree): 한 노드가 가지는 자식 노드의 개수
    // 트리의 차수: 트리 내 모든 노드 중 가장 큰 차수 값

    // 레벨(Level): 트리의 층 번호, 루트는 레벨 0 (또는 1)
    // 깊이(Depth): 루트에서 특정 노드까지의 거리, 위에서 아래로 측정
    // 높이(Height): 특정 노드에서 가장 먼 리프 노드까지의 거리, 아래에서 위로 측정(트리의 높이 = 루트 노드의 높이)

    TreeNode* n1 = (TreeNode*)malloc(sizeof(TreeNode));
    TreeNode* n2 = (TreeNode*)malloc(sizeof(TreeNode));
    TreeNode* n3 = (TreeNode*)malloc(sizeof(TreeNode));

    n1->data = 10;
    n2->data = 20;
    n3->data = 30;

    // n1을 루트로 만들고 n2와 n3를 연결
    n1->left = n2;
    n1->right = n3;

    // 리프노드는 반드시 명시적으로 자식을 NULL로 초기화
    n2->left = NULL;
    n2->right = NULL;

    n3->left = NULL;
    n3->right = NULL;

    printf("루트 노드의 데이터: %d\n", n1->data);
    printf("루트의 왼쪽 노드의 데이터: %d\n", n1->left->data);
    printf("루트의 오른쪽 노드의 데이터: %d\n", n1->right->data);

    // 사용이 끝난 노드들의 메모리 해제
    free(n1);
    free(n2);
    free(n3);

    return 0;
}