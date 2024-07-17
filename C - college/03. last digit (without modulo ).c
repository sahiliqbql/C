#include <stdio.h>
int main(){
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("last digit = %d",a-(a/10)*10);
    return 0 ;
}
