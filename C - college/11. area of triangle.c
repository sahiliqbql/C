#include <stdio.h>
#include <math.h>
int main(){
    int a ,b ,c ;
    printf("enter three side : \n");
    scanf("%d%d%d",&a,&b,&c);
    int s = (a+b+c)/2;
    int area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area = %d",area);
    return 0 ;
}