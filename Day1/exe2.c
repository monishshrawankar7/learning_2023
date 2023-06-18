#include <stdio.h>

<<<<<<< HEAD
void swap(void *a, void *b, size_t size) {
    char *temp = (char *)malloc(size);

    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);

    free(temp);
}

int main() {
    int num1 = 10;
    int num2 = 20;

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2, sizeof(int));

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    double value1 = 3.14;
    double value2 = 2.71;

    printf("Before swapping: value1 = %lf, value2 = %lf\n", value1, value2);

    swap(&value1, &value2, sizeof(double));

    printf("After swapping: value1 = %lf, value2 = %lf\n", value1, value2);

    return 0;
}
=======
void print_grade(int score);

int main() {
    int score;

    printf("Enter the student's score: ");
    scanf("%d", &score);

    print_grade(score);

    return 0;
}
void print_grade(int score) {
    if (score >= 90 && score <= 100) {
        printf("Grade A\n");
    } else if (score >= 75 && score <= 89) {
        printf("Grade B\n");
    } else if (score >= 60 && score <= 74) {
        printf("Grade C\n");
    } else if (score >= 50 && score <= 59) {
        printf("Grade D\n");
    } else if (score >= 0 && score <= 49) {
        printf("Grade F\n");
    } else {
        printf("Invalid score\n");
    }
}
>>>>>>> d5e6a9bc08bfb798d86917557fecd9ec5127962d
