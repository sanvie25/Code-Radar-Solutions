#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    fgets(str, sizeof(str), stdin);

    // Debugging: Show what's actually in `str`
    printf("Input: \"%s\"\n", str);

    // Remove trailing newline
    str[strcspn(str, "\n")] = '\0';

    printf("Length: %zu\n", strlen(str));

    return 0;
}
