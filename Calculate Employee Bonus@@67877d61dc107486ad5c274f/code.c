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
    int sum=0;
    int i;
    for (i = 0; i<m; i++) {
        scanf("%d %s %d",&w.b[i],&w.a[i],&w.c[i]);
        }
    // for (i = 0; i<7; i++) {
    //     scanf("%s %d", &w.a[i],&w.b[i]);
    //     }
    for (i = 0; i<7; i++) {
        printf("Employee ID:%d, Name:%s, Bonus: %f\n",&w.b[i],&w.a[i],&w.c[i]);
        }
}
