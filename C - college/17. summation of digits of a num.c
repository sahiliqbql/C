#include <stdio.h>
int main(){
    int n ;
    printf("enter a num : ");
    scanf("%d",&n);
    int s = 0 ;
    while(n>0){
        int  d = n%10;
        s = s+d;
        n = n/10;
    }
    printf("summation = %d",s);
    
}