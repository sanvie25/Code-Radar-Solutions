#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    int count = 0, i = 0;

    // Input a line of text
    scanf(" %[^\n]", s);

    // Trim leading spaces
    while (s[i] == ' ' || s[i] == '\t') {
        i++;
    }

    // Count words
    for (; s[i] != '\0'; i++) {
        if ((s[i] == ' ' || s[i] == '\t') && s[i + 1] != ' ' && s[i + 1] != '\t' && s[i + 1] != '\0') {
            count++;
        }
    }

    // If the string is not empty, there is at least one word
    if (s[i - 1] != ' ' && s[i - 1] != '\t') {
        count++;
    }

    printf("%d\n", count);
    return 0;
}
