#include <stdio.h>

<<<<<<< HEAD
int countSetBits(int arr[], int size) {
    int totalBits = 0;

    for (int i = 0; i < size; i++) {
        int num = arr[i];
        int count = 0;

        while (num > 0) {
            count += num & 1;
            num >>= 1;
        }

        totalBits += count;
    }

    return totalBits;
}

int main() {
    int arr[] = {0x1, 0xF4, 0x10001};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = countSetBits(arr, size);
    printf("Total number of set bits: %d\n", result);
=======
int main() {
    float num1, num2, result;
    char operator;

    // Read input from the user
    printf("Enter Number 1: ");
    scanf("%f", &num1);

    printf("Enter the Operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter Number 2: ");
    scanf("%f", &num2);

    // Perform calculations based on the operator
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
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return 1; // Exit the program with an error code
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1; // Exit the program with an error code
    }

    // Print the result
    printf("Result: %.2f\n", result);
>>>>>>> d5e6a9bc08bfb798d86917557fecd9ec5127962d

    return 0;
}
