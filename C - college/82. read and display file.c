#include <stdio.h>
int main(){
    FILE* ptr = fopen("file.txt","r");

    char str[100];

    if(ptr!=NULL){
        fgets(str,100,ptr);
        printf("%s",str);
    }else{
        printf("file not open");
    }

    return 0;
}
