#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    
    int a[10]; 

    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n-1; i++) {
        if(a[i] > a[i+1]) {
            printf("Not Sorted");
            return 0;  
        }
    }
printf("Sorted"); 
return 0;
}
