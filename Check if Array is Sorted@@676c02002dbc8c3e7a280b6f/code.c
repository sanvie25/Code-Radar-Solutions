#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    
    int a[n]; 

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = 1; i < n; i++) {
        if(a[i] < a[i - 1]) {
            printf("Not sorted\n");
            return 0;  
        }
    }

    printf("Sorted\n"); 
    return 0;
}
