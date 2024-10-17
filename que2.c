#include <stdio.h>
#include <ctype.h>

#define ALPHABET_SIZE 26


void countConsonants(const char *sentence, int consonantCount[]) {
    for (int i = 0; sentence[i] != '\0'; i++) {
        char ch = tolower(sentence[i]);
        if (ch >= 'a' && ch <= 'z') { 
            if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
                consonantCount[ch - 'a']++; 
            }
        }
    }
}

int main() {
    char sentence[256]; 
    int consonantCount[ALPHABET_SIZE] = {0};


    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin); 

    countConsonants(sentence, consonantCount);

    printf("Consonant counts:\n");
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (consonantCount[ch - 'a'] > 0) {
            printf("%c: %d\n", ch, consonantCount[ch - 'a']);
        }
    }

    return 0;
}
