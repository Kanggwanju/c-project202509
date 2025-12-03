#include <stdio.h>
#include <stdlib.h>

// 이진 트리(Binary Tree): 모든 노드의 차수가 2 이하인 트리
typedef struct TreeNode {
    int data;               // 노드가 저장할 데이터
    struct TreeNode* left;  // 왼쪽노드를 가리키는 포인터
    struct TreeNode* right; // 오른쪽노드를 가리키는 포인터
} TreeNode;

// 새로운 트리의 노드를 생성하고 포인터처리를 해주는 함수
TreeNode* createNode(int data) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = data;

    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// 트리구조를 만들기위해 포인터를 연결해주는 함수
void linkNodes(TreeNode* parent, TreeNode* left, TreeNode* right) {
    parent->left = left;
    parent->right = right;
}

// 전위 순회 함수
void preorder(TreeNode* node) {
    // 재귀를 멈추는 조건: 더이상 내려갈 곳이 없으면 중단
    if (node == NULL) return;

    // 1. 중 : 현재 노드를 처리
    printf("[%d] ", node->data);

    // 2. 왼 : 왼쪽 서브트리로 재귀 이동
    preorder(node->left);

    // 3. 오 : 오른쪽 서브트리로 재귀 이동
    preorder(node->right);
}

// 중위 순회 함수
void inorder(TreeNode* node) {
    // 재귀를 멈추는 조건: 더이상 내려갈 곳이 없으면 중단
    if (node == NULL) return;
    
    // 1. 왼 : 왼쪽 서브트리로 재귀 이동
    inorder(node->left);

    // 2. 중 : 현재 노드를 처리
    printf("[%d] ", node->data);
    
    // 3. 오 : 오른쪽 서브트리로 재귀 이동
    inorder(node->right);
}

// 후위 순회 함수
void postorder(TreeNode* node) {
    // 재귀를 멈추는 조건: 더이상 내려갈 곳이 없으면 중단
    if (node == NULL) return;
    
    // 1. 왼 : 왼쪽 서브트리로 재귀 이동
    postorder(node->left);

    // 2. 오 : 오른쪽 서브트리로 재귀 이동
    postorder(node->right);

    // 3. 중 : 현재 노드를 처리
    printf("[%d] ", node->data);
}

int main(void) {
    
    // 트리 순회(Traversal): 트리를 구성하는 모든 노드를 한 번씩 방문하는 체계적인 과정
    // 순회의 핵심 도구, 재귀(Recursion): 큰 트리 안에 작은 트리(서브트리)가 있는 재귀적 구조

    // 순회 종류: 전위, 중위, 후위
    // 전위: 나(루트)부터 처리 (중,왼,오)
    //       - 트리 복사에 사용

    // 중위: 왼쪽 다 보고 중간에 나 처리, 오른쪽 봄 (왼, 중, 오)
    //       - 이진 탐색 트리를 중위 순회하면 데이터가 오름차순으로 정렬되어 출력

    // 후위: 왼쪽, 오른쪽 다 보고 마지막에 나 처리 (왼, 오, 중)
    //       - 트리 삭제 (메모리 해제)

    /*
            10
           /  \
          20  30
          /\    \
         40 50  60
    */
    // 1단계: 트리에 필요한 노드를 생성합니다.
    TreeNode* root = createNode(10);
    TreeNode* n20 = createNode(20);
    TreeNode* n30 = createNode(30);
    TreeNode* n40 = createNode(40);
    TreeNode* n50 = createNode(50);
    TreeNode* n60 = createNode(60);

    // 2단계: 생성된 노드들을 연결하여 트리구조 완성
    linkNodes(root, n20, n30);
    linkNodes(n20, n40, n50);
    linkNodes(n30, NULL, n60);

    printf("### 전위 순회 결과 ###\n");
    preorder(root);
    printf("끝! \n\n");

    printf("### 중위 순회 결과 ###\n");
    inorder(root);
    printf("끝! \n\n");

    printf("### 후위 순회 결과 ###\n");
    postorder(root);
    printf("끝! \n\n");

    return 0;
}