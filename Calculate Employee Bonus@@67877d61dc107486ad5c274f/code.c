#include <stdio.h>
#include <string.h>

struct bonus{
    char a[25][25];
    int b[7];
    int c[25];
};

int main(){
    int m;
    scanf("%d",&m);
    struct bonus w;
    int i;
    for (i = 0; i<m; i++) {
        scanf("%d %s %d",&w.b[i],&w.a[i],&w.c[i]);
        }

    for (i = 0; i<m; i++) {
        printf("Employee ID:%d, Name:%s, Bonus: %d\n",&w.b[i],&w.a[i],&w.c[i]);
        }
}