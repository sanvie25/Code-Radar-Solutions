#include <stdio.h>
#include <string.h>

struct bonus{
    char a[25][25];
    int b[25];
    float c[25];
};

int main(){
    int m;
    scanf("%d",&m);
    struct bonus w;
    int i;
    for (i = 0; i<m; i++) {
        scanf("%d %s %f",&w.b[i],&w.a[i],&w.c[i]);
        }

    for (i = 0; i<m; i++) {
        if(w.c[i]<50000){
            printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",w.b[i],w.a[i],w.c[i]/10);  
        }
        else{
            printf("Employee ID: %d, Name: %s, Bonus: %.2f\n",w.b[i],w.a[i],w.c[i]/20);
        }
        }
}