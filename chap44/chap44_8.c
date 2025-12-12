#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int accNum;
    double bal;
} BankAcc;

double calcPower(double base, int year) {
    double r = 1.0;
    for (int i = 0; i < year; i++) {
        r *= base;
    }
    return r;
}

void initAcc(BankAcc *acc, int accNumber, double balance) {
    acc->accNum = accNumber;
    acc->bal = balance;
}

void transact(BankAcc *acc, double *amount) {
    if (*amount > 0 && *amount < acc->bal) {
        acc->bal -= *amount;
    } else {
        acc->bal += *amount;
    }
}

void applyInterest(BankAcc *acc) {
    acc->bal *= calcPower(1 + 0.1, 3);
}

// 2024년 1회차
int main(void) {

    BankAcc myAcc;
    initAcc(&myAcc, 9981, 2200.0);

    double amount = 100.0;

    // myAcc.bal: 2100.0
    transact(&myAcc, &amount);

    // myAcc.bal: 2795.1
    applyInterest(&myAcc);

    // 정답: 9981 and 2795.10
    printf("%d and %.2f\n", myAcc.accNum, myAcc.bal);
    
    return 0;
}