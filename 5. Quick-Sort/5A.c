#include <stdio.h>

// Function to compute f(n)
int f(int n) {
    return 2*n + 3*n + 5;
}

// Function to compute c*g(n)
int g(int n, int c) {
    return c*n;
}

int main() {
    int n, c = 1; // Initial value of c
    int n0 = -1; // Initialize n0 to -1 (not found)

    // Loop to find the smallest n0 where f(n) >= c*g(n)
    for (n = 1; n <= 30; n++) {
        if (f(n) >= g(n, c)) {
            n0 = n;
            break;
        }
    }

    // Print values of f(n) and c*g(n) for n from 10 to 30
    printf("n\tf(n)\tc*g(n)\n");
    for (n = 10; n <= 30; n++) {
        printf("%d\t%d\t%d\n", n, f(n), g(n, c));
    }

    // Print the found n0 value
    if (n0 != -1) {
        printf("The smallest n0 value where f(n) >= c*g(n) is: %d\n", n0);
    } else {
        printf("No n0 value found in the given range.\n");
    }

    return 0;
}
