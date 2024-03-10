#include <stdio.h>
#include <string.h>
int main(){
    char name[] = "name";
    int z = strlen(name);
    for(int i=0,j=z-1;i<=j;i++,j--){
        char c = name[j];
        name[j] = name[i];
        name[i] = c;
    }
    puts(name);
    return 0;
}
