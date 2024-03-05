// A B C D E 
// B C D E 
// C D E 
// D E 
// E

#include <stdio.h>
int main(){
    for(int i=1; i<=5; i++){
        for(int j=i; j<=5; j++){
            printf("%c ",(64+j));
        }
        printf("\n");
    }
    return 0;
}
