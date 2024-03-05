// A
// B C 
// C D E
// D E F G
// E F G H I

#include <stdio.h>

int main() {
    int c = 65;
    for(int i=1;i<=5;i++){
        for(int j=0; j<i; j++){
            printf("%c ",(c+j));
        }
        c++;
        printf("\n");
    }
    return 0;
}
