// A B C D E 
// A B C D 
// A B C 
// A B 
// A 

#include <stdio.h>
int main(){
    for(int i=5; i>0; i--){
        for(int j=0;j<i;j++){
            printf("%c ",(65+j));
        }
        printf("\n");
    }
    return 0;
}
