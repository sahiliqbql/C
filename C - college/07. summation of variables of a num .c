#include <stdio.h>
int main(){
    int a ;
    printf("enter a number : ");
    scanf("%d",&a);
    int s = 0 ;
    while (a>0)
    {
        int d = a%10 ;
        s = s + d ;
        a = a / 10 ;
    }
    printf("summation = %d",s);
    return 0 ;
}
