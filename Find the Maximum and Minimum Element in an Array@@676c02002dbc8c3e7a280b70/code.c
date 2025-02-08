#include <stdio.h>

int main() {
    int i,n,a[10],l,s;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    l = s = a[0];
    for(i=0;i<n;i++){
        if (l<a[i]){
            l=a[i];
        }
        if (s>a[i]){
            s=a[i];
        }
    }
    printf("%d %d",s,l);
}