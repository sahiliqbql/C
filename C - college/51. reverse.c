#include <stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int rvs[5];
    for(int i=0,j=4; j>=0; i++,j--){
        rvs[j] = arr[i];
    }
    for(int i=0; i<5; i++){
        printf("%d",rvs[i]);
    }
    return 0;
}
