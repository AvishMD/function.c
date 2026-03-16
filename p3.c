#include <stdio.h>
    int od(int n){
        if(n%2==0){
            return 0;
        }
        else{
            return 1;
        }
    }
int main() {
    int n;
    scanf("%d",&n);
    int p=od(n);
    if(p==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}
