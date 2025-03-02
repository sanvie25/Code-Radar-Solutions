#include <stdio.h>
#include <string.h>
int main(){
    char a[25];
    char rev[25];
    int i;
    int len = strlen(a);
    for(i=len-1;i>=0;i--){
        printf("%c",rev[i]);
    }
}