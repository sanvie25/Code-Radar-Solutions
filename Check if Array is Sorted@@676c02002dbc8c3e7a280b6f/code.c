#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    
    int a[10]; 

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = n-2; i > 0; i--) {
        if(a[n-1] < a[n-2]) {
            printf("Not Sorted");
            return 0;  
        }
    }

printf("Sorted"); 
return 0;
}
