#include <stdio.h>

int F(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    int a = 0, b = 1, c = 2;
    int result;

    for (int i = 3; i <= n; i++) {
        result = a + b;
        a = b;
        b = c;
        c = result;
    }

    return result;
}

int main() {
    int n = 3;
    printf("F(%d) = %d\n", n, F(n));
    return 0;
}
/*
Advantages:
    Avoids redundant calculations and is more efficient compared to the recursive approach.
    Linear time complexity, making it suitable for larger values of n.

Disadvantages:
    Still not the most efficient approach, especially for extremely large values of n.
    Code might be slightly more complex compared to the recursive version.
*/