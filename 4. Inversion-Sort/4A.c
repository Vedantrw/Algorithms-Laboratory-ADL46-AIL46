#include <stdio.h>

// Function to calculate f(n)
int f(int n) {
    return 4 * n + 3;
}

// Function to plot f(n) and c * g(n)
void plotGraphs(int c, int n_min, int n_max) {
    printf("n\tf(n)\tc*g(n)\n");
    for (int n = n_min; n <= n_max; n++) {
        int fn = f(n);
        int g_n = n;
        printf("%d\t%d\t%d\n", n, fn, c * g_n);
    }
}

int main() {
    int c = 5; // Example value for c, adjust as needed
    int n_min = 10;
    int n_max = 30;

    plotGraphs(c, n_min, n_max);

    return 0;
}
