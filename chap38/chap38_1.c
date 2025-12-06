#include <stdio.h>
#include <stdlib.h>

// 이진 트리(Binary Tree): 모든 노드의 차수가 2 이하인 트리
typedef struct TreeNode {
    int data;               // 노드가 저장할 데이터
    struct TreeNode* left;  // 왼쪽노드를 가리키는 포인터
    struct TreeNode* right; // 오른쪽노드를 가리키는 포인터
} TreeNode;

// 이진 탐색 트리에서 특정 값을 탐색하는 함수 (재귀버전)
TreeNode* search_recursive(TreeNode* node, int key) {
    // 재귀 탈출조건 1: 노드가 NULL (갈곳이 없다)
    if (node == NULL) return NULL; // 탐색 실패

    // 재귀 탈출조건 2: 탐색 성공한 경우
    if (key == node->data) return node;

    // 재귀 루프
    if (key < node->data) { // 왼쪽 서브트리로 이동
        return search_recursive(node->left, key);
    } else { // 오른쪽 서브트리로 이동
        return search_recursive(node->right, key);
    }
}

// 이진 탐색 트리에서 특정 값을 찾는 함수 (반복문 버전)
TreeNode* iterative(TreeNode* node, int key) {
    // 현재 노드를 추적할 포인터
    TreeNode* current = node; // 초기에는 루트를 담아놓고

    while (current != NULL) {
        // 찾았으면 탐색 성공
        if (key == current->data) {
            return current;
        }
        // 찾는 값이 더 작으면 왼쪽으로 포인터를 이동
        else if (key < current->data) {
            current = current->left;
        }
        // 찾는 값이 더 크면 오른쪽으로 포인터를 이동
        else {
            current = current->right;
        }
    }
    return NULL; // 탐색 실패를 알림
}

// 새로운 트리의 노드를 생성하고 포인터처리를 해주는 함수
TreeNode* createNode(int data) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = data;

    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// 이진 탐색 트리에 새로운 노드를 삽입하는 함수
TreeNode* insertNode(TreeNode* node, int key) {

    // 트리가 삽입할 위치(NULL)에 도달하면 새노드를 생성해서 반환
    if (node == NULL) {
        return createNode(key);
    }

    // 삽입하려는 key데이터가 현재 노드보다 작으면, 왼쪽으로 이동
    if (key < node->data) {
        node->left = insertNode(node->left, key);
    } else {
        node->right = insertNode(node->right, key);
    }

    // 변경된 서브트리의 루트인 현재 노드를 반환
    return node;
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


int main(void) {
    
    // 이진 탐색 트리(BST)
    // 규칙: 왼쪽 서브트리 < 현재 노드 < 오른쪽 서브트리
    //       - 왼쪽 자손들은 모두 작음, 오른쪽 자손들은 모두 큼
    // 탐색할 때 비교를 통해 찾을 필요 없는 절반의 데이터를 버릴 수 있음
    
    // 삽입 순서에 따라 트리 모양이 달라짐
    // 데이터가 정렬된 순서로 삽입되면 편향 트리가 될 수 있음

    // BST의 탐색, 삽입 성능은 트리의 높이에 비례(O(h))
    // 균형 잡힌 트리에서는 O(log(N)): 절반씩 버리면서 탐색, 삽입
    // 편향 트리에서는 O(N)

    // 중위 순회 (왼 중 오) -> BST 규칙 (작 < 중 < 큰) : 결과로 오름차순 정렬

    // 탐색(70): 제일 위 노드에서 시작 -> 70이므로 왼쪽 버림 -> 오른쪽(80)으로 향함 -> ...
    /*
                    50
               30        80
            20   40    70  90
                     60  75
    */

    TreeNode* root = NULL; // 빈 트리로 시작
    
    root = insertNode(root, 50);
    root = insertNode(root, 30);
    root = insertNode(root, 80);
    root = insertNode(root, 20);
    root = insertNode(root, 40);
    root = insertNode(root, 70);
    root = insertNode(root, 90);

    // 중위 순회하면 정렬이되는가?
    printf("### BST 중위 순회 결과: ");
    inorder(root);
    printf("끝!! \n\n");

    // 탐색 (재귀 탐색)
    TreeNode* resultNode =  search_recursive(root, 47);
    if (resultNode != NULL) {
        printf("탐색결과: %d\n", resultNode->data);
    } else {
        printf("탐색 실패!!\n");
    }
    
    return 0;
}