#include <stdio.h>

int main(void) {
    
    int choice;
    printf("최애 걸그룹은? (1: 에스파, 2: 아이브, 3: 르세라핌): ");
    scanf("%d", &choice);
    
    // fall-through(폴쓰루) 때문에 break를 걸어줘야한다.
    // 디폴트에서는 break 없어도 된다.
    // switch의 치명적 약점: 괄호 안에는 정수형 타입(int, char 등)만 사용 가능
    // float, double 같은 실수는 절대 불가! (컴파일 에러 발생)
    switch(choice) {
        case 1:
            printf("에스파!! 위우이위윙플래시!\n");
            break;
        case 2:
            printf("아이브!! 숨참고 러브다이브!\n");
            break;
        case 3:
            printf("르세라핌!! 안티 프레젤!\n");
            break;
        default:
            printf("K-pop 화이팅!\n");
    }

    return 0;
}