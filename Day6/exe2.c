#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void convertToUpperCase(FILE* source, FILE* target) {
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(toupper(ch), target);
    }
}

void convertToLowerCase(FILE* source, FILE* target) {
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        fputc(tolower(ch), target);
    }
}

void convertToPureUpperCase(FILE* source, FILE* target) {
    int ch;
    while ((ch = fgetc(source)) != EOF) {
        if (isalpha(ch)) {
            fputc(toupper(ch), target);
        } else {
            fputc(ch, target);
        }
    }
}

int main(int argc, char* argv[]) {
    FILE* sourceFile;
    FILE* targetFile;
    char* option;
    char ch;

    if (argc < 3) {
        printf("Insufficient arguments. Usage: ./cp [option] source_file target_file\n");
        return 1;
    }

    option = argv[1];
    sourceFile = fopen(argv[2], "r");
    targetFile = fopen(argv[3], "w");

    if (sourceFile == NULL || targetFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    if (strcmp(option, "-u") == 0) {
        convertToUpperCase(sourceFile, targetFile);
    } else if (strcmp(option, "-l") == 0) {
        convertToLowerCase(sourceFile, targetFile);
    } else if (strcmp(option, "-s") == 0) {
        convertToPureUpperCase(sourceFile, targetFile);
    } else {
        while ((ch = fgetc(sourceFile)) != EOF) {
            fputc(ch, targetFile);
        }
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(targetFile);

    return 0;
}
