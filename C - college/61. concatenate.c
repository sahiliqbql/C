#include <stdio.h>
#include <string.h>
int main(){
    char name[100];
    printf("enter 1st string: ");
    fgets(name, sizeof(name), stdin);
    char name2[100];
    printf("enter 2nd string: ");
    fgets(name2, sizeof(name2), stdin);

    int m = strlen(name);
    int n = strlen(name2);

    for(int i=m,j=0; i<(m+n) && j<n;i++,j++){
        name[i] = name2[j];
    }

    printf("new string : ");
    puts(name);
    return 0;
}
