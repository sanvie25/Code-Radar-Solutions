#include <stdio.h>
#include <string.h>

struct subscription {
    char a[25][25]; 
    char b[25][25]; 
    float c[25]; 
};

int main(){
    int n;
    scanf("%d",&n);

    struct subscription q;
    int i;
    int b=0;
    float br=0.00,pr=0.00,sr=0.00;
    int p=0;
    int s=0;

    for (i = 0; i < n; i++) {
        scanf("%s %s %.1f", &q.a[i], q.b[i], &q.c[i]);
        if(q.b[i]=="Basic"){
            b+=1;
            br+=199.00;
        }
        else if(q.b[i]=="Standard"){
            s+=1;
            sr+=499.00;
        }
        else{
            p+=1;
            pr+=999.00;
        }
    }

    printf("Basic: %d Users, Revenue: %d; Standard: %d Users, Revenue: %d; Premium: %d Users, Revenue: %d;",b,br,s,sr,p,pr);

    return 0;
}