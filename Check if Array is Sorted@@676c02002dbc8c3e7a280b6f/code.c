#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    
    int a[10]; 

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i = n-1; i < n; i--) {
        if(a[n] < a[n- 1]) {
            printf("Not Sorted");
            return 0;  
        }
    }

printf("Sorted"); 
return 0;
}
