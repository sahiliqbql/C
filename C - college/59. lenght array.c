#include <stdio.h>
int main(){
    char name[] = "hello world";
    int s=0;
    int i=0;
    while(name[i]!='\0'){
        s++;
        i++;
    }
    printf("lenght = %d",s);
    return 0;
}
