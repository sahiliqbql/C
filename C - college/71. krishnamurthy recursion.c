#include <stdio.h>

int fact(int n);
int krs(int n);

int main(){
    int n;
    printf("enter a num: ");
    scanf("%d",&n);
    if(n==krs(n)){
        printf("%d is krishnamurthy num",n);
    }else{
        printf("not");
    }
    return 0;
}


int fact(int n){
    if(n==0){
        return 1;
    }else{
        n = n*fact(n-1);
    }
    return n;
}

int krs(int n){
    if(n==1 || n==0){
        return 1;
    }else{
        int d = n%10;
        n = fact(d)+krs(n/10);
    }
    return n;
}
