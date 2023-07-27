#include <stdio.h>

int F(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    return F(n - 3) + F(n - 2);
}

int main() {
    int n = 3;
    printf("F(%d) = %d\n", n, F(n));
    return 0;
}
/*
Advantages:
    Simple and easy to understand.
    Represents the mathematical definition of the recurrence relation directly.

Disadvantages:
    Recursive approach may lead to redundant calculations and inefficiencies for large values of n.
    Exponential time complexity, leading to high computation time for larger n values.
*/