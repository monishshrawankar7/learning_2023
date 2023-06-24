#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box* boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

double calculateSurfaceArea(struct Box* boxPtr) {
    return 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
}

int main() {
    struct Box myBox;
    struct Box* boxPtr = &myBox;

    // Assign values to the box dimensions
    boxPtr->length = 5.0;
    boxPtr->width = 3.0;
    boxPtr->height = 2.0;

    // Calculate and display the volume
    double volume = calculateVolume(boxPtr);
    printf("Volume: %.2f\n", volume);

    // Calculate and display the total surface area
    double surfaceArea = calculateSurfaceArea(boxPtr);
    printf("Total Surface Area: %.2f\n", surfaceArea);

    return 0;
}
