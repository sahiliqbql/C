#include <stdio.h>
int main(){
    int arr[] = {7,4,10,8,3,1};

    for(int i=0; i<6; i++){
        int min = arr[i];
        int p = i;
        for(int j=i; j<6; j++){
            if(arr[j]<min){
                min = arr[j];
                p = j;
            }
        }
        int t = arr[p];
        arr[p] = arr[i];
        arr[i] = t;
    }

    //print
    for(int i=0; i<6; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
