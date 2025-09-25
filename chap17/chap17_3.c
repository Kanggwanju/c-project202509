#include <stdio.h>

int main(void) {
    
    // 3x3 빙고판
    int bingo[3][3];
    int i, j;

    printf("----- 3x3 빙고판을 숫자로 채워주세요 -----\n");
    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("좌표 [%d][%d]에 넣을 숫자: ", i, j);
            scanf("%d", &bingo[i][j]);
        }
    }

    printf("\n----- 빙고판 완성! -----\n\n");

    for (i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%3d ", bingo[i][j]);
        }
        printf("\n");
    }
    return 0;
}