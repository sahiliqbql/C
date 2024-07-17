#include <stdio.h>
int main(){
    double n;
    printf("enter a number: ");
    scanf("%lf",&n);
    int a = n ;
    double b = n - a ;
    double c = b/10;
    double newnum = a + 0.1 + c ;
    printf("new num = %lf",newnum);
    return 0 ;
}
