#include <stdio.h>
int main(){
    int arr[5];
    printf("Enter 5 sorted elements: ");
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    int n;
    printf("enter the element searching for: ");
    scanf("%d", &n);

    int strt = 0;
    int end = 4;
    int mid;
    int c = 0;

    while(strt<=end){
        mid = (strt+end)/2;
        if(n<arr[mid]){
            end = mid - 1;
        }else if(n>arr[mid]){
            strt = mid+1;
        }else if(n==arr[mid]){
            printf("element found in location = %d",mid+1);
            c++;
            break;
        }
    }
    if(c==0){
        printf("element not found");
    }
    return 0;
}
