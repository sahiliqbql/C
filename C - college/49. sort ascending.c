#include <stdio.h>
int main(){
    int arr[] = {2,7,5,6,4,1,3};
    for(int i=0; i<7; i++){
        for(int j=0; j<7; j++){
            if(arr[i]<arr[j]){
                int t = arr[j];
                arr[j] = arr[i];
                arr[i] = t;
            }
        }
    }
    for(int i=0; i<7; i++){
        printf("%d",arr[i]);
    }
}
