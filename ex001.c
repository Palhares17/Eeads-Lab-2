#include <stdio.h>

void zerarValor(int *pnum1, int *pnum2) {
    *pnum1 = 0;
    *pnum2 = 0;
}

void print(int *pnum1, int *pnum2) {
    printf("%d %d", *pnum1, *pnum2);
}

int main() {
    int num1 = 5, num2 = 9;
    int *pNum1 = &num1, *pNum2 = &num2;

    zerarValor(pNum1, pNum2);
    print(pNum1, pNum2);

    return 0;
}
