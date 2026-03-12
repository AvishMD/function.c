#include <stdio.h>
    int max(int p,int r,int t){
        int c=p*r*t/100;
        return c;
    }
int main() {
     int p,r,t;
     scanf("%d %d %d",&p,&r,&t);
     float g=max(p,r,t);
     printf("%.2f",g);
    return 0;
}
