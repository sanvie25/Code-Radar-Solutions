#include <stdio.h>

int main() {
    int j,i,n;
    printf("enter the elements");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=n-1;j>0;j--){
            if(a[j]<a[j-1]){
               printf("Not Sorted");
            }
        }
    }
}