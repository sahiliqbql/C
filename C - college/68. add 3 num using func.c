#include <stdio.h>

int sum(int a, int b, int c){
    int s = a+b+c;
    return s;
}

int main(){
    int a,b,c;
    
    printf("enter num 1: ");
    scanf("%d",&a);
    printf("enter num 2: ");
    scanf("%d",&b);
    printf("enter num 3: ");
    scanf("%d",&c);

    printf("sum = %d",sum(a,b,c));
    return 0;
}
