#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ENTRIES 100

struct LogEntry {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char time[10];
};

void extractLogEntries(struct LogEntry *logEntries, int *numEntries) {
    FILE *file;
    char line[100];
    char *token;

    file = fopen("data.csv", "r");
    if (file == NULL) {
        printf("Error opening the file.\n");
        return;
    }

    *numEntries = 0;
    while (fgets(line, sizeof(line), file) != NULL) {
        token = strtok(line, ",");
        logEntries[*numEntries].entryNo = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[*numEntries].sensorNo, token);

        token = strtok(NULL, ",");
        logEntries[*numEntries].temperature = atof(token);

        token = strtok(NULL, ",");
        logEntries[*numEntries].humidity = atoi(token);

        token = strtok(NULL, ",");
        logEntries[*numEntries].light = atoi(token);

        token = strtok(NULL, ",");
        strcpy(logEntries[*numEntries].time, token);

        (*numEntries)++;
    }

    fclose(file);
}

void displayLogEntries(const struct LogEntry *logEntries, int numEntries) {
    printf("Log Entries:\n");
    printf("--------------------------------------------------\n");
    printf("EntryNo\tSensorNo\tTemperature\tHumidity\tLight\tTime\n");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < numEntries; i++) {
        printf("%d\t%s\t\t%.2f\t\t%d\t\t%d\t%s\n",
               logEntries[i].entryNo, logEntries[i].sensorNo, logEntries[i].temperature,
               logEntries[i].humidity, logEntries[i].light, logEntries[i].time);
    }

    printf("--------------------------------------------------\n");
}

int main() {
    struct LogEntry logEntries[MAX_ENTRIES];
    int numEntries = 0;

    extractLogEntries(logEntries, &numEntries);
    displayLogEntries(logEntries, numEntries);

    return 0;
}
