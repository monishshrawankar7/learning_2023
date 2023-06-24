#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

void getTime(struct Time* time) {
    printf("Enter the time (hours minutes seconds): ");
    scanf("%d %d %d", &(time->hours), &(time->minutes), &(time->seconds));
}

void calculateDifference(struct Time time1, struct Time time2, struct Time* difference) {
    int totalSeconds1 = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
    int totalSeconds2 = time2.hours * 3600 + time2.minutes * 60 + time2.seconds;
    int diffSeconds = totalSeconds2 - totalSeconds1;

    difference->hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    difference->minutes = diffSeconds / 60;
    difference->seconds = diffSeconds % 60;
}

int main() {
    struct Time startTime, endTime, timeDiff;

    printf("Enter the start time:\n");
    getTime(&startTime);

    printf("\nEnter the end time:\n");
    getTime(&endTime);

    calculateDifference(startTime, endTime, &timeDiff);

    printf("\nDifference between the two time periods:\n");
    printf("%02d:%02d:%02d\n", timeDiff.hours, timeDiff.minutes, timeDiff.seconds);

    return 0;
}
