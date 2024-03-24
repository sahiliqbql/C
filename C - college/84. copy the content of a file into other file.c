#include <stdio.h>
int main(){
    FILE* ptr = fopen("file.txt","r");
    FILE* cpy = fopen("filecpy.txt","w");

    if (ptr == NULL || cpy == NULL) {
        perror("Error opening files");
        return 1;
    }

    int c;
    while((c = fgetc(ptr)) != EOF){
        fputc(c,cpy);
    }

    fclose(ptr);
    fclose(cpy);
    return 0;
}
