// split into 2 or 3 or n number of part
#include <stdio.h>
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n;
    printf("split into: ");
    scanf("%d",&n);
    int z = sizeof(arr)/sizeof(arr[0]);
    int l = z/n;
    int m = l*2;
    for(int i=0; i<l; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int x = l;
    for(int i=0; i<n-1; i++){
        for(int i=l; i<m; i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
        l=l+x;
        m=m+x;
    }
    return 0;
}
