#include <stdio.h>

int fact(int *p){
    for(int i = *p-1; i>0; i--){
        *p = *p * i;
    }
    return *p;
}

int main(){
    int a;
    printf("enter a num: ");
    scanf("%d",&a);
    int s = fact(&a);
    printf("fact = %d",s);
    return 0;
}
