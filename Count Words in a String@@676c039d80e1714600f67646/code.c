#include <stdio.h>

int main() {
    char str[100]; 
    int i, word_count = 0, in_word = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' '|| str[i] == '\t') {
            in_word = 0; 
        } else if (in_word == 0) {
            in_word = 1;
            word_count++;
        }
    }
    printf("%d", word_count);
    return 0;
}
