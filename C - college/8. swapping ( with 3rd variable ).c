#include <stdio.h>
int main(){
    int a = 3 ;
    int b = 5;
    int t = b ;
    b = a ;
    a = t ;
    printf("a = %d\n",a);
    printf("b = %d",b);
    return 0 ; 
}
