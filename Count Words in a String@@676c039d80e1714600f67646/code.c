#include <stdio.h>

int main() {
    char str[100]; // Array to store the string
    int i, word_count = 0, in_word = 0;

    // Input the string safely using fgets()
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop through each character in the array
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            in_word = 0; // We are not in a word
        } else if (in_word == 0) {
            in_word = 1; // Start of a new word
            word_count++;
        }
    }

    // Print the word count
    printf("Number of words: %d\n", word_count);

    return 0;
}
