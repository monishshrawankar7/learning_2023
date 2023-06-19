#include <stdio.h>

// Generic swap function using pointers and type casting
void swap(void* a, void* b, size_t size) {
    char* ptr1 = (char*)a;
    char* ptr2 = (char*)b;
    
    while (size--) {
        char temp = *ptr1;
        *ptr1++ = *ptr2;
        *ptr2++ = temp;
    }
}

int main() {
    int a = 5, b = 10;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(a));
    printf("After swap: a = %d, b = %d\n", a, b);
    
    float x = 3.14, y = 2.718;
    printf("Before swap: x = %f, y = %f\n", x, y);
    swap(&x, &y, sizeof(x));
    printf("After swap: x = %f, y = %f\n", x, y);
    
    return 0;
}
