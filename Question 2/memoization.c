#include <stdio.h>

int memo[100] = {0}; 

int F(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    if (memo[n] != 0)
        return memo[n];

    memo[n] = F(n - 3) + F(n - 2);
    return memo[n];
}

int main() {
    int n = 3; 
    printf("F(%d) = %d\n", n, F(n));
    return 0;
}
/*
Advantages:
    Combines the simplicity of the recursive approach with the efficiency of the iterative approach.
    Avoids redundant calculations by using memoization, making it significantly faster than both previous methods.
    Asymptotic time complexity is linear, which is very efficient for large values of n.

Disadvantages:
    Slightly more complex due to the additional use of the memoization array.
*/
