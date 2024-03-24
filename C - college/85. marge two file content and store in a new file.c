#include <stdio.h>
int main(){
    FILE* ptr1 = fopen("file.txt","r");
    FILE* ptr2 = fopen("file2.txt","r");
    FILE* mrge = fopen("filemrg.txt","w");

    if(ptr1==NULL || ptr2==NULL || mrge==NULL){
        printf("file not open");
        return 1;
    }

    char c;
    while((c = fgetc(ptr1) != EOF)){
        fputc(c,mrge);
    }
    while((c = fgetc(ptr2) != EOF)){
        fputc(c,mrge);
    }

    fclose(mrge);
    fclose(ptr1);
    fclose(ptr2);
    return 0;
}
