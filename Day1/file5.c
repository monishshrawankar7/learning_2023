#include <stdio.h>

int bit_operations(int num, int oper_type) {
    int result;

    switch (oper_type) {
        case 1:
            // Set 1st bit
            result = num | (1 << 0);
            break;
        case 2:
            // Clear 31st bit
            result = num & ~(1 << 31);
            break;
        case 3:
            // Toggle 16th bit
            result = num ^ (1 << 15);
            break;
        default:
            printf("Invalid operation type\n");
            return num;
    }

    return result;
}

int main() {
    int num, oper_type, result;

    // Read input number and operation type
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &oper_type);

    // Perform bit operations
    result = bit_operations(num, oper_type);

    // Print the result
    printf("Result: %d\n", result);

    return 0;
}
