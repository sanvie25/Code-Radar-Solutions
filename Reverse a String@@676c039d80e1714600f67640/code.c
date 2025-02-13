#include <stdio.h>
char str[25];
int l = strlen(str);
int i;
for(i=l-1;i>=0;i--){
    printf("%c",str[i]);
}