// Write a C program to copy contents of file to another usinbng file handling
#include <stdio.h>
#include <stdlib.h>     

int main() {
    FILE *sourceFile, *destinationFile;
    char sourcePath[100], destinationPath[100];
    char ch;

    // Get source file path from user
    printf("Enter the path of the source file: ");
    scanf("%s", sourcePath);

    // Get destination file path from user
    printf("Enter the path of the destination file: ");
    scanf("%s", destinationPath);

    // Open the source file in read mode
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return EXIT_FAILURE;
    }

    // Open the destination file in write mode
    destinationFile = fopen(destinationPath, "w");
    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return EXIT_FAILURE;
    }

    // Copy contents from source to destination
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");

    // Close the files
    fclose(sourceFile);
    fclose(destinationFile);

    return EXIT_SUCCESS;
}