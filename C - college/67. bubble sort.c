#include <stdio.h>
int main(){
    int arr[] = {15,16,6,8,5};

    for(int i=5; i>0; i--){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]){
                int t = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = t;
            }
        }
    }

    //print
    for(int i=0; i<5; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
