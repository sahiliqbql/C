#include <stdio.h>
int main(){
    int a,c,d,e,num;
    printf("enter a number: ");
    scanf("%d",&a);
    c = a%10;
    d = (a/10)%10;
    e = a/100;
    num = (e*100)+(c*10)+d;
    printf("final number = %d",num);
    printf("their product :%d",num*a);
    return 0 ; 
}
