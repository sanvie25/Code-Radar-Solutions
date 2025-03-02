#include <stdio.h>
#include <ctype.h>

int countWords(const char *str) {
    int count = 0;
    int inWord = 0;  // Flag to track if we are inside a word

    while (*str) {
        if (isspace(*str)) {
            inWord = 0;  // Outside a word
        } else if (!inWord) {
            inWord = 1;  // Start of a new word
            count++;     // Increment word count
        }
        str++;  // Move to next character
    }

    return count;
}

int main() {
    char str[] = "  Hello, this is a   C program! ";
    printf("Number of words: %d\n", countWords(str));
    return 0;
}
