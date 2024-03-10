#include <stdio.h>
int main(){
    char str[100];
    printf("enter string: ");
    gets(str);
    int z = strlen(str);
    int c = 0;
    for(int i=0; i<z; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' ){
            c++;
        }
    }
    printf("vowels = %d",c);
    return 0;
}