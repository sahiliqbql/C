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
    for(int i=0; i<n; i++){
        printf("%d",a[i]);
    }
    return 0;
}