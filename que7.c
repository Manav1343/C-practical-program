#include <stdio.h>

int main() {
    FILE *file1, *file2;
    char sentence[100];


    file1 = fopen("input.txt", "w");
    if (file1 == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); 
    fprintf(file1, "%s", sentence); 
    fclose(file1); 

    file1 = fopen("input.txt", "r");
    if (file1 == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    fgets(sentence, sizeof(sentence), file1); 
    fclose(file1); 

   
