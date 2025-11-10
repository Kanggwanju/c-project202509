#include <stdio.h>

// 무기 데미지랑 스킬 데미지를 넣어주면 그걸 합산해서 알려주는 함수
// 파라미터에는 자료형을 써줌
int calculateTotalDamage(int weaponDamage, int skillDamage) {
    int totalDamage = weaponDamage + skillDamage;
    printf("데미지 계산중... 크리티컬!!\n");
    return totalDamage;
}

int main(void) {
    
    // 호출부에서 넣어주는 숫자 = 인자, 정의부는 파라미터
    int myDamage = calculateTotalDamage(50, 35);
    printf("총 데미지: %d\n", myDamage);

    return 0;
}