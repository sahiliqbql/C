/*
1
2 2
3 3 3
4 4 4 4
*/

#include <stdio.h>
int main(){
    for(int i=0;i<=4;i++){
        for(int j=0;j<i;j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    return 0;
}
