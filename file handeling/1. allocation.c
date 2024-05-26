#include <stdio.h>
#include <stdlib.h>
int main(){
    
    int *ptr = (int*)malloc(100*sizeof(int)); 
    printf("%d\n",*ptr); //gerbeg value
    ptr++;
    printf("%d\n",*ptr);

    int *ptr2 = (int*)calloc(100,sizeof(int));
    printf("%d\n",*ptr2);//0
    ptr2++;
    printf("%d\n",*ptr2);

    return 0;
}
