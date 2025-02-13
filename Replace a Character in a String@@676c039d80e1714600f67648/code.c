#include <stdio.h>
#include <string.h>
int main(){
    char star[25];
    char a;
    char b;
    scanf("%s",star);
    scanf("%c",&a);
    scanf("%c",&b);
    int l = strlen(star);
    int i;
    for(i=0;i<=l;i++){
        if(str[i]==a){
            printf("%c",b);
        }
        else{
            printf("%c",star[i]);
        }
    }
}