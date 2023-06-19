#include <stdio.h>

int findLargestNumber(int num) {
    int maxNum = 0;
    int divisor = 1;
    
    while (divisor <= num) {
        int newNum = (num / (divisor * 10)) * divisor + (num % divisor);
        if (newNum > maxNum) {
            maxNum = newNum;
        }
        divisor *= 10;
    }
    
    return maxNum;
}

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    
    int largestNumber = findLargestNumber(num);
    
    printf("Largest number by deleting a single digit: %d\n", largestNumber);
    
    return 0;
}

