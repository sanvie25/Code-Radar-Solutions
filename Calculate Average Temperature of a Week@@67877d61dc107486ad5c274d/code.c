#include <stdio.h>
#include <string.h>

struct week{
    char a[7][10];
    int b[7];
};

int main(){
    struct week w;
    int i;
    for (i = 0; i<7; i++) {
        printf("enter");
        scanf("%s %d", &w.a[i],&w.b[i]);
        }
    #include <stdio.h>
#include <string.h>

struct week{
    char a[7][10];
    int b[7];
};

int main(){
    struct week w;
    int i;
    int sum=0;
    for (i = 0; i<7; i++) {
        printf("enter");
        scanf("%s %d", &w.a[i],&w.b[i]);
        }
    for (i = 0; i<7; i++) {
        printf("%s, %d\n", w.a[i], w.b[i]);
        }
    for (i = 0; i<7; i++) {
        sum = sum + w.b[i];
        printf("Average Temperature: %d\n" w.b[i]);
        }
}
}