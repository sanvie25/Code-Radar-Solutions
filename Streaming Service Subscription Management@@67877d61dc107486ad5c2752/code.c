#include <stdio.h>
#include <string.h>

struct subscription {
    char a[25][25]; 
    char b[25][25]; 
    float c[25]; 
};

int main() {
    int n;
    scanf("%d", &n);

    struct subscription q;
    int i;
    int b = 0, p = 0, s = 0;
    float br = 0.00, pr = 0.00, sr = 0.00;

    for (i = 0; i < n; i++) {
        scanf("%s %s %f", q.a[i], q.b[i], &q.c[i]);

        if (strcmp(q.b[i], "Basic") == 0) {
            b += 1;
            br += 199.00;
        } 
        else if (strcmp(q.b[i], "Standard") == 0) {
            s += 1;
            sr += 499.00;
        } 
        else {
            p += 1;
            pr += 999.00;
        }
    }

    printf("Basic: %d Users, Revenue: %.2f; Standard: %d Users, Revenue: %.2f; Premium: %d Users, Revenue: %.2f", 
       b, br, s, sr, p, pr);


    return 0;
}
