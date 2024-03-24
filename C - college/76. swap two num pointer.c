#include <stdio.h>
int main(){
    int a = 5;
    int b = 9;

    int *p = &a;
    int *q = &b;

    int t = *q;
    *q = *p;
    *p = t;

    printf("a = %d\n",*p);
    printf("b = %d",*q);
    return 0;
}
