// 0 1 1 2 3 5 8 13 ...

#include <stdio.h>

int fib(int n);

int main(){
    int n;
    printf("enter limit: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        printf("%d ",fib(i));
    }
    return 0;
}

int fib(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        n = fib(n-1)+fib(n-2);
    }
    return n;
}
