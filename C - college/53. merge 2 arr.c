#include <stdio.h>
int main(){
    int arr1[] = {1,2,3,4};
    int arr2[] = {5,6,7,8};
    int a = sizeof(arr1)/sizeof(arr1[0]);
    int b = sizeof(arr2)/sizeof(arr2[0]);
    int n = a+b;
    int arr3[n];
    for(int i=0; i<a; i++){
        arr3[i] = arr1[i];
    }
    for(int i=a,j=0; i<n && j<b; i++,j++){
        arr3[i] = arr2[j];
    }
    printf("new array :\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr3[i]);
    }
}
