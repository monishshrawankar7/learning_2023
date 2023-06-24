#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 10

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeMembers(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

void displayMembers(const struct Student* students, int numStudents) {
    printf("Student Details:\n");

    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

void sortArray(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = i + 1; j < numStudents; j++) {
            if (students[i].marks < students[j].marks) {
                // Swap the structures
                struct Student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void searchByName(const struct Student* students, int numStudents, const char* name) {
    int found = 0;
    printf("Search Results:\n");

    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student %d:\n", i + 1);
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n\n", students[i].marks);
            found = 1;
        }
    }

    if (!found) {
        printf("No students found with the name: %s\n", name);
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents;
    char searchName[20];

    // Initialize all members
    initializeMembers(students, MAX_STUDENTS);

    // Read input and populate the array of structures
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    printf("Enter student details (Roll No, Name, Marks):\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollno);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }

    // Sort the array based on marks
    sortArray(students, numStudents);

    // Display all members
    displayMembers(students, numStudents);

    // Search by name
    printf("Enter the name to search: ");
    scanf("%s", searchName);
    searchByName(students, numStudents, searchName);

    return 0;
}


