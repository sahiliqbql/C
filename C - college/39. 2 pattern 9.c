// A B C D E 
// C D E F 
// E F G 
// G H 
// I

#include <stdio.h>
int main(){
    int c = 64;
    for(int i=1; i<=5; i++){
        for(int j=i; j<=5; j++){
            printf("%c ",(c+j));
        }
        printf("\n");
        c++;
    }
    return 0;
}
