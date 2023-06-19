#include <stdio.h>

// Function to print numbers from 1 to n
void printIncreasing(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

// Function to print spaces between numbers
void printSpaces(int n) {
    for (int i = 1; i <= 2 * n - 3; i++) {
        printf(" ");
    }
}

// Function to print numbers from n to 1
void printDecreasing(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d", i);
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for (int i = n; i >= 1; i--) {
        printIncreasing(i);
        printSpaces(i);
        if (i != 1) {
            printDecreasing(i);
        }
        printf("\n");
    }
    
    return 0;
}
