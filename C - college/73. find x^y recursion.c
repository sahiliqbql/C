#include <stdio.h>

int power(int a, int b);

int main(){
    int x;
    int y;

    printf("enter number: ");
    scanf("%d",&x);
    printf("enter power: ");
    scanf("%d",&y);

    printf("ans = %d",power(x,y));
    return 0;
}

int power(int a, int b){
    if(b==0){
        return 1;
    }else{
        a = a*power(a,b-1);
    }
    return a;
}
