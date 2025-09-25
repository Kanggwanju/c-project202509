#include <stdio.h>

int main(void) {
    // 행렬 전치 (자로세로 뒤집기)
    int original[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    int transposed[3][2];
    int i, j;

    for (i = 0; i < 2; i ++) {
        for (j = 0; j < 3; j++) {
            transposed[j][i] = original[i][j];
        }
    }

    for (i = 0; i < 3; i ++) {
        for (j = 0; j < 2; j ++) {
            printf("%3d", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}