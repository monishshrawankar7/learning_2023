#include <stdio.h>

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


    