// Write a C program to copy contents of file to another usinbng file handling
#include <stdio.h>
#include <stdlib.h>     

int main() {
    FILE *sourceFile, *destinationFile;
    char sourcePath[100], destinationPath[100];
    char ch;

    printf("Enter the path of the source file: ");
    scanf("%s", sourcePath);

    
    printf("Enter the path of the destination file: ");
    scanf("%s", destinationPath);

    
    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return EXIT_FAILURE;
    }

    destinationFile = fopen(destinationPath, "w");
    if (destinationFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return EXIT_FAILURE;
    }

    
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return EXIT_SUCCESS;
}