#include <stdio.h>
    int max(int a,int b){
    if(a<b){
        return b;
    }
    else{
        return a;
    }
    }
int main() {
     int a,b;
     scanf("%d %d",&a,&b);
     int p=max(a,b);
     if(p==a){
         printf("%d is greater than %d",a,b);
     }
     else if(p==b){
         printf("%d is greater than %d",b,a);
     }
     return 0;
}
