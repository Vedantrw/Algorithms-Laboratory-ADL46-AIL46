#include <stdio.h>
#include <math.h>

// Function to calculate f(n)
int f(int n) {
    return 7 * n * n + 7 * n + 5;
}

// Function to plot f(n) and c1 * g(n) and c2 * g(n)
void plotGraphs(int c1, int c2, int n_min, int n_max) {
    printf("n\tf(n)\tc1*g(n)\tc2*g(n)\n");
    for (int n = n_min; n <= n_max; n++) {
        int fn = f(n);
        int g_n = n * n;
        printf("%d\t%d\t%d\t%d\n", n, fn, c1 * g_n, c2 * g_n);
    }
}

int main() {
    int c1 = 6; // Example values for c1 and c2, adjust as needed
    int c2 = 8;
    int n_min = 10;
    int n_max = 30;

    plotGraphs(c1, c2, n_min, n_max);

    return 0;
}
