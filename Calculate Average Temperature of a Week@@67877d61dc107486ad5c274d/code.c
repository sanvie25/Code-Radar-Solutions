#include <stdio.h>
#include <string.h>

struct week{
    char a[7][10];
    int b[7];
};

int main(){
    struct week w;
    int sum=0;
    int i;
    for (i = 0; i<7; i++) {
        scanf("%s %d", &w.a[i],&w.b[i]);
        }
    for (i = 0; i<7; i++) {
        scanf("%s %d", &w.a[i],&w.b[i]);
        }
    for (i = 0; i<7; i++) {
        printf("%s, %d\n", w.a[i], w.b[i]);
        }
    for (i = 0; i<7; i++) {
        sum = sum + w.b[i];
        }
    float avg = sum/7.0;
    printf("Average Temperature: %.2f\n",avg);
}
