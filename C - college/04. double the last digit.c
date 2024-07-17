#include <stdio.h>
int main(){
    int a,c;
    printf("enter a number: ");
    scanf("%d",&a);
    c = (a%10);
    printf("double of last digit = %d",c*2);
    return 0 ;
}
