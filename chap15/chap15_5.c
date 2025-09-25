#include <stdio.h>

int main(void) {
    
    int choice;

    do {
        printf("1. 새 게임 2. 불러오기 3. 종료\n메뉴 선택: ");
        scanf("%d", &choice);
    } while (choice != 3);

    printf("프로그램을 종료합니다.\n");

    return 0;
}