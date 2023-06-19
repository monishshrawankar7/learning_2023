#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Read Operand 1
    printf("Enter Operand 1: ");
    scanf("%f", &num1);

    // Read Operator
    printf("Enter Operator: ");
    scanf(" %c", &operator);

    // Read Operand 2
    printf("Enter Operand 2: ");
    scanf("%f", &num2);

    // Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator\n");
            return 0;
    }

    // Print the result
    printf("Result: %.2f\n", result);

    return 0;
}

