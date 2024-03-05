// A
// B B 
// C C C 
// D D D D

#include <stdio.h>
int main(){
    for(int i=1; i<5;i++){
        for(int j=0;j<i;j++){
            printf("%c ",(64+i));
        }
        printf("\n");
    }
    return 0;
}
