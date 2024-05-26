#include <stdio.h>
int main(){
    FILE* ptr = fopen("file.txt","r");

    char str[100];
    fgets(str,100,ptr);
    
    //only print fisst line
    if(fgets(str,100,ptr)!=NULL){
        printf("%s",str);
    }

    //print all
    while(fgets(str,100,ptr)!=NULL){
        printf("str");
    }
    return 0;
}
