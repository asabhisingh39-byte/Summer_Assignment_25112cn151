#include <stdio.h>
#include <stdlib.h>
long long fibonacci(int n) {
    if (n == 0) return 0; 
    if (n == 1) return 1; 
    return fibonacci(n - 1) + fibonacci(n - 2); 
}
int main() {
    int terms;
    printf("Enter the number of terms in Fibonacci series: ");
    if (scanf("%d", &terms) != 1) {
        printf("Invalid input.  enter an integer.\n");
        return 1;
    }
    if (terms < 0) {
        printf("Number of terms cannot be negative.\n");
        return 1;
    }
    printf("Fibonacci Series (%d terms):\n", terms);
    for (int i = 0; i < terms; i++) {
        printf("%lld ", fibonacci(i));
    }
    printf("\n");
    return 0;
}