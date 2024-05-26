#include <stdio.h>
int main(){
    FILE* ptr = fopen("file.txt","w");

    char str[] = "hello , i am good!";
    fputs(str,ptr);

    fclose(ptr);
}
