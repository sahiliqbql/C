#include <stdio.h>
#include <string.h>
int main(){
    char name[] = "hello world";
    int z = strlen(name);
    char new[100];
    for(int i=0; i<z; i++){
        new[i] = name[i];
    }
    puts(new);
    return 0;
}
