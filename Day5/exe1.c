#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 10

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* inputString, struct Student* students, int* numStudents) {
    char temp[20];
    int i = 0;
    int j = 0;
    int len = strlen(inputString);
    int count = 0;

    while (i < len) {
        if (inputString[i] != ' ') {
            temp[j++] = inputString[i++];
        } else {
            temp[j] = '\0';
            j = 0;

            if (count == 0) {
                students[*numStudents].rollno = atoi(temp);
            } else if (count == 1) {
                strcpy(students[*numStudents].name, temp);
            } else if (count == 2) {
                students[*numStudents].marks = atof(temp);
            }

            count++;
            i++;
        }
    }

    (*numStudents)++;
}

int main() {
    char inputString[] = "1001 Aron 100.00";
    struct Student students[MAX_STUDENTS];
    int numStudents = 0;

    parseString(inputString, students, &numStudents);

    printf("Student Details:\n");
    printf("Roll No: %d\n", students[0].rollno);
    printf("Name: %s\n", students[0].name);
    printf("Marks: %.2f\n", students[0].marks);

    return 0;
}
