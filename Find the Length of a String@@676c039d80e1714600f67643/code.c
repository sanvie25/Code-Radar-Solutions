#include <stdio.h>
#include <string.h>

int main() {
    char str[5][20];
    int length;
    fgets(str, sizeof(str), stdin);
    length = strlen(str);
    printf("%d",length);
}