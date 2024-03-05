#include <stdio.h>
int main(){
    int a,b;
    printf("enter row number of matrix 1 = ");
    scanf("%d",&a);
    printf("enter column number of matrix 1 = ");
    scanf("%d",&b);
    int arr1[a][b];

    int m,n;
    printf("enter row number of matrix 2 = ");
    scanf("%d",&m);
    printf("enter column number of matrix 2 = ");
    scanf("%d",&n);
    int arr2[m][n];

    int mul[a][n];

    if(b==m){

        printf("enter elements of 1st matrix: \n");
        for(int i=0; i<a; i++){
            for(int j=0; j<b; j++){
                scanf("%d",&arr1[i][j]);
            }
        }

        printf("enter elements of 1st matrix: \n");
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                scanf("%d",&arr2[i][j]);
            }
        }
        //calculation
        int k = b;
        for(int i=0; i<k; i++){
            for(int j=0; j<k; j++){
                mul[i][j] = 0;
                for(k=0; k<b; k++){
                    mul[i][j] += arr1[i][k]*arr2[k][j];
                }
            }
        }
        
        //answer
        printf("result :\n");
        for(int i=0; i<a; i++){
            for(int j=0; j<n; j++){
                printf("%d ",mul[i][j]);
            }
            printf("\n");
        }

    }else{
        printf("multiplication is not possible.");
    }
    return 0;
}
