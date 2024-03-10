#include <stdio.h>
#include <string.h>
int main(){
    char name[100];
    printf("enter ur string: ");
    gets(name);
    char copy[100];
    strcpy(copy,name);

    int t = strlen(name);
    
    for(int i=0,j=t-1; i<=j;i++,j--){
        char c = name[j];
        name[j] = name[i];
        name[i] = c;
    }

    int c = strcmp(copy,name);
    if(c==0){
        printf("Palindrom");
    }else{
        printf("not palindrom");
    }

    return 0;
}
