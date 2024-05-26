#include <stdio.h>

typedef int* intPointer;

int main(){
    int a = 5;
    intPointer p = &a;
    printf("%p", p);
    return 0;
}
