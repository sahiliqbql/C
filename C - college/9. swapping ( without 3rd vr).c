#include <stdio.h>
int main(){
    int a = 3;
    int b = 5;
    
    a = a + b ;
    b = a - b ;
    a = a - b ;

    printf("a = %d\n",a);
    printf("b = %d",b);
}
