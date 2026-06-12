#include <stdio.h>
double power(double base, int exponent) {
    double result = 1.0;
    int exp = exponent;
    if (exp < 0) {
        exp = -exp; 
    }
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    if (exponent < 0) {
        if (result == 0) {
            printf("Error: Division by zero (base is 0 and exponent is negative).\n");
            return 0;
        }
        return 1.0 / result;
    }
    return result;
}
int main() {
    double x;
    int n;
    printf("Enter base (x): ");
    if (scanf("%lf", &x) != 1) {
        printf("Invalid input for base.\n");
        return 1;
    }
    printf("Enter exponent (n): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input for exponent.\n");
        return 1;
    }
    double result = power(x, n);
    printf("%.6lf ^ %d = %.6lf\n", x, n, result);
    return 0;
}
