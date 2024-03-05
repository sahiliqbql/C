#include <stdio.h>
int main(){
    int a,n,s=0;
    printf("enter a num : ");
    scanf("%d",&a);
    n = a ;
    while(a>0){
        int d = a%10;
        s = s*10 + d ;
        a = a/10;
    }
    if(n == s){
        printf("palindrome");
    }else{
        printf("not %d",s);
    }
    return 0;
}
