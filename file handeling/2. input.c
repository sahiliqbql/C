#include <stdio.h>
#include <stdlib.h>
int main(){
    int n; 
    printf("enter limit : ");
    scanf("%d",&n);

    int* ptr = (int*)malloc(n*4);
    int* p = ptr;
    //input
    for(int i=0; i<n; i++){
        scanf("%d",ptr); // &(*ptr) = ptr
        ptr++;
    }
    //print
    for(int i=0; i<n; i++){
        printf("%d ",*p);
        p++;
    }
    return 0;
}
