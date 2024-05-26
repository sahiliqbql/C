#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr = (int*)calloc(10,4);

    //free
    free(ptr);

    ptr = NULL;
}

    // int* p = ptr;
    // ptr++;
    // free(p);
    
