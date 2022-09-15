#include <stdio.h>

void troca(int *a, int *b, int *c) {
    int aux = *a;
    *a = *b;
    *b = *c;
    *c = aux;
}

void print(int *a, int *b, int *c) {
    printf("a = %d, b = %d, c = %d", *a, *b, *c);
}

int main() {
    int a = 1, b = 2, c = 3;
    int *pA = &a, *pB = &b, *pC= &c;

    troca(&a, &b, &c);
    print(&a, &b, &c);
    return(0);
}