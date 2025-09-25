#include <stdio.h>

int main(void) {
    
    // 행은 생략 가능, 열은 생략 불가능
    int treasure_map[][3] = {
        {1,0,5},
        {0,20,0}
    };

    int i, j;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) { // 2 * 3 = 6번 출력
            printf("좌표 [%d][%d]의 보물: %d골드\n", 
                i, j, treasure_map[i][j]);
        }

        // 2번 출력
        printf("----- 다음 행으로 이동 -----\n");
    }

    return 0;
}