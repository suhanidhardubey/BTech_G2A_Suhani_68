#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[100], word[50], temp[50];
    int count = 0;

    // Input file name
    printf("Enter file name: ");
    scanf("%s", filename);

    // Open file
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Input word to search
    printf("Enter word to search: ");
    scanf("%s", word);

    // Read words from file and compare
    while (fscanf(fp, "%s", temp) != EOF) {
        if (strcmp(temp, word) == 0) {
            count++;
        }
    }

    // Output result
    if (count > 0) {
        printf("The word '%s' exists in the file.\n", word);
        printf("It occurs %d times.\n", count);
    } else {
        printf("The word '%s' does not exist in the file.\n", word);
    }

    fclose(fp);
    return 0;
}
