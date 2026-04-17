#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    char ch;

    
    printf("Enter the name of the source file: ");
    scanf("%s", sourceFileName);

    
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return EXIT_FAILURE;
    }

    
    printf("Enter the name of the destination file: ");
    scanf("%s", destinationFileName);

    
    destinationFile = fopen(destinationFileName, "w");
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