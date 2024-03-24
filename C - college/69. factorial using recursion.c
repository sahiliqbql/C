#include <stdio.h>

int fact(int n);

int main(){
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    printf("factorial = %d",fact(n));
    return 0;
}

int fact(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        n = n*fact(n-1);
    }
    return n;
}
