#include <stdio.h>
int main(){
    int n ;
    int s = 1 ;
    printf("enter a num : ");
    scanf("%d",&n);
    while(n>0){
        s = s*n;
        n = n-1;
    }
    printf("factorial = %d",s);
}
