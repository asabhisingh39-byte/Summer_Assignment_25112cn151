#include <stdio.h>
int binaryToDecimal(int n) {
int decimal = 0, base = 1, last_digit;
while (n > 0) {
last_digit = n % 10;
n = n / 10;
decimal += last_digit * base;
base *= 2;
}
return decimal;
}
int main() {
int binary;
printf("Enter a binary number: ");
scanf("%d", &binary);
printf("Decimal equivalent: %d\n", binaryToDecimal(binary));
return 0;
}