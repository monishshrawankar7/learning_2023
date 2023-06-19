#include <stdio.h>

void printExponent(double num) {
    unsigned long long* ptr = (unsigned long long*)&num; // Pointer to the memory of the double variable
    unsigned long long exponent = (*ptr & 0x7FF0000000000000) >> 52; // Extracting the exponent bits
    
    printf("Exponent (Hex): 0x%llx\n", exponent);
    
    // Converting exponent to binary format
    printf("Exponent (Binary): 0b");
    for (int i = 11; i >= 0; i--) {
        printf("%lld", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);
    
    return 0;
}
