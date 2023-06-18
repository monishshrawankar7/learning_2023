#include <stdio.h>

<<<<<<< HEAD
void printExponent(double x) {
    unsigned long long *ptr = (unsigned long long *)&x;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;

    // Print exponent in hexadecimal format
    printf("Exponent (hex): 0x%llX\n", exponent);

    // Print exponent in binary format
    printf("Exponent (binary): ");
    for (int i = 10; i >= 0; i--) {
        printf("%d", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;

    printExponent(x);

    return 0;
}
=======
int find_biggest_if_else(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int find_biggest_ternary(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    int result_if_else = find_biggest_if_else(num1, num2); //using if else 
    printf("Using if-else: %d\n", result_if_else);

    int result_ternary = find_biggest_ternary(num1, num2); //using ternary operator
    printf("Using ternary operator: %d\n", result_ternary);

    return 0;
}


    
>>>>>>> d5e6a9bc08bfb798d86917557fecd9ec5127962d
