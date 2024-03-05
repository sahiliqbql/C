#include <stdio.h>
int main(){
    int n;
    int s = 0 ;
    printf("enter a number : ");
    scanf("%d",&n);
    while (n>0)
    {
        int d = n%10;
        s = s*10 + d;
        n = n/10;
    }
    printf("reverce = %d",s);
    
}