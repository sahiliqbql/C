#include <stdio.h>
int main(){
    int n ;
    printf("enter a number : ");
    scanf("%d",&n);
    int s = 0 ;
    while(s<n){
        s++;

        if(s%2!=0){
            printf("%d ",s);
        }
    }
    return 0;
    
}
