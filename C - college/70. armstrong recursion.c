#include <stdio.h>
#include <math.h>

int arm(int n, int s);

int main(){
    int n;
    printf("enter a num: ");
    scanf("%d",&n);
    int m = n;

    int s = 0;
    while(n>0){
        s++;
        n = n/10;
    }
    n = m;

    if(n==arm(n,s)){
        printf("armstrong num");
    }else{
        printf("not");
    }
    return 0;
}
    
int arm(int n, int s){
    int p;
    if(n==0 || n==1){
        return 1;
    }else{
        int d =  n%10;
        p = pow(d,s) + arm(n/10, s);
    }
    return p;
}
