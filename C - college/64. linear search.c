#include <stdio.h>
int main(){
    int arr[5];
    for(int i=0; i<5; i++){
        printf("enter element %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    int n;
    printf("enter element you search: ");
    scanf("%d",&n);
    int s=0; 
    for(int i=0; i<5; i++){
        if(arr[i]==n){
            printf("index = %d",i);
            s++;
        }
    }
    if(s==0){
        printf("element not found");
    }
    return 0;
}
