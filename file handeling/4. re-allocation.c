#include <stdio.h>
#include <stdlib.h>
int main(){
    int* ptr = (int*)calloc(5,4);

    //increase size
    ptr = realloc(ptr,100*4);
}

/*when we do small change like 30*4
  the location of old ptr and new ptr is same*/

/*but when we do big changes 10000*4 
  the new ptr location is changed*/

  