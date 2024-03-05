#include <stdio.h>
int main(){
    int arr[] = {2,7,5,6,4,1,3};
    int n;
    printf("enter element: ");
    scanf("%d",&n);
    int s = 0;
    for(int i=0;i<7;i++){
        if(n==arr[i]){
            s++;
        }
    }
    if(s!=0){
        printf("element presemt in array");
    }else{
        printf("element is not present in array");
    }
    return 0;
}
