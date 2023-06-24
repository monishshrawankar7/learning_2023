#include <stdio.h>

struct Point {
    int x;
    int y;
};

void swapPoints(struct Point* point1, struct Point* point2) {
    // Swap x values
    int tempX = point1->x;
    point1->x = point2->x;
    point2->x = tempX;

    // Swap y values
    int tempY = point1->y;
    point1->y = point2->y;
    point2->y = tempY;
}

int main() {
    struct Point point1, point2;

    // Initialize point1
    point1.x = 5;
    point1.y = 10;

    // Initialize point2
    point2.x = 15;
    point2.y = 20;

    printf("Before swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    // Swap the fields of the two structures
    swapPoints(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}
