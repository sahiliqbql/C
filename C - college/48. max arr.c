#include <stdio.h>
int main(){
    
    int n;
    printf("Enter limit: ");
    scanf("%d",&n);
    int a[n];
    printf("enter elements: ");
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    //max
    int max = a[0];
    for(int i=0; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    printf("max = %d",max);
    return 0;
}
