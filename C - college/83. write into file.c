#include <stdio.h>
int main(){
    FILE* ptr = fopen("file.txt","w");

    char str[] = "hello world";

    fputc(str[12],ptr);
    
    fclose(ptr);
}
