#include <stdio.h>
int main(){
    char name[100];
    printf("enter 1st string: ");
    gets(name);
    int m = strlen(name);

    char name2[100];
    printf("enter 2nd string: ");
    gets(name2);
    int n = strlen(name2);

    int r;
    int min;

    if(m>n){
        r = m-n;
        min = n;
    }else{
        r = n-m;
        min = m;
    }
    int c = 0;
    for(int i=0; i<min; i++){
        if(name[i]!=name2[i]){
            c++;
        }
    }

    printf("difference = %d",c+r);
    return 0;
}
