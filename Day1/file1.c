#include <stdio.h>

int find_biggest_if_else(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int find_biggest_ternary_operator(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int a = 10;
    int b = 20;
    int biggest_if_else = find_biggest_if_else(a, b);
    int biggest_ternary_operator = find_biggest_ternary_operator(a, b);

    printf("Using if-else: %d\n", biggest_if_else);
    printf("Using ternary operator: %d\n", biggest_ternary_operator);

    return 0;
}
