// A A A A A 
// B B B B 
// C C C 
// D D 
// E  

#include <stdio.h>

int main() {
    int c = 65;
    for (int i = 0; i <5; i++) {
        for (int j = i; j < 5; j++) {
            printf("%c ", (c + i));
        }
        printf("\n");
    }

    return 0;
}
